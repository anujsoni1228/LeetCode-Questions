//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
bool isPal(string s)
    {
        int i=0,j=s.length()-1;
        while(i<j)
        if(s[i++]!=s[j--])
            return false;
        return true;
    }
    int solve(string s,int i,int j, vector<vector<int>> &dp)
    {
        if(isPal(s.substr(i,j-i+1)))
            return dp[i][j]=0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int ans=INT_MAX;
        for(int k=i+1;k<=j;k++)
        {
            if(isPal(s.substr(i,k-i)))
            {
                ans=min(ans,1+solve(s,i,k-1,dp)+solve(s,k,j,dp));
            }
        }
        return dp[i][j]=ans;
    }
    int minCut(string s) 
    {
        int N=s.size();
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return solve(s,0,N-1,dp);
    }
    int palindromicPartition(string str)
    {
        return minCut(str);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends