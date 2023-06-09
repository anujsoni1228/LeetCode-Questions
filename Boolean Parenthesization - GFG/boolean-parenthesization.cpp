//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    pair<int,int> solve(string s,int i,int j,vector<vector<pair<int,int>>> &dp)
    {
        if(i==j)
            return dp[i][j]={s[i]=='T',s[i]=='F'};
        if(dp[i][j].first!=-1 and dp[i][j].second!=-1)
            return dp[i][j];
        pair<int,int> ans={0,0};
        for(int k=i+1;k<=j;k+=2)
        {
            pair<int,int> l=solve(s,i,k-1,dp);
            pair<int,int> r=solve(s,k+1,j,dp);
            switch(s[k])
            {
                case '&':
                    ans.first+=( l.first*r.first)%1003;
                    ans.second+=((l.first*r.second)%1003 + (l.second*r.first)%1003 + (l.second*r.second)%1003)%1003;
                break;
                case '|':
                    ans.first+=( (l.first*r.second)%1003 + (l.second*r.first)%1003 + (l.first*r.first)%1003)%1003;
                    ans.second+=(l.second*r.second)%1003;
                break;
                case '^':
                   ans.first+=( (l.first*r.second)%1003 + (l.second*r.first)%1003)%1003;
                   ans.second+=((l.first*r.first)%1003+(l.second*r.second)%1003)%1003;
                break;
            }
            ans.first%=1003;
            ans.second%=1003;
        }
        return dp[i][j]= {ans.first, ans.second};
    }
    
    int countWays(int n, string s)
    {
        vector<vector<pair<int,int>>> dp(n,vector<pair<int,int>>(n,{-1,-1}));
        pair<int,int> ans=solve(s,0,n-1,dp);
        return ans.first;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends