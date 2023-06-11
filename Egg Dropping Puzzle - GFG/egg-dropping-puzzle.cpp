//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    // n --> eggs
    int helper(int n, int k,vector<vector<int>> &dp) 
    {
        if(n==0 or k==0)
            return 0;
        if(n==1)
            return k;
        if(k==1)
            return 1;
        if(dp[k][n]!=-1)
            return dp[k][n];
              
        int ans=INT_MAX;   
        for(int i=1;i<=k;i++)
        {
            ans=min(ans,1+max(helper(n-1,i-1,dp),helper(n,k-i,dp)));
        }
        return dp[k][n]=ans;
    }
    int eggDrop(int k, int n) {
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return helper(k,n,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends