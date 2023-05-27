class Solution {
public:
    int helper(int a,vector<int>& c,int n,vector<vector<int>> &dp)
    {
        if(a==0)
            return 1;
        if(n==0)
            return 0;
        if(dp[a][n]!=-1)
            return dp[a][n];
        if(a-c[n-1]>=0)
            return dp[a][n]=helper(a-c[n-1],c,n,dp)+helper(a,c,n-1,dp);  
        return dp[a][n]=helper(a,c,n-1,dp);  
    }
    int change(int a, vector<int>& c) {
        vector<vector<int>> dp(a + 1, vector<int>(c.size()+1, -1));     
        return helper(a,c,c.size(),dp);
    }
};