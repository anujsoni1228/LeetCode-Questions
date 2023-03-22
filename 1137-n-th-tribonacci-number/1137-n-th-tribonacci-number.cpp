class Solution {
public:
    
    
    int tribonacci1(int n) 
    {
        if(n==0 || n==1)
            return n;
        if(n==2)
            return 1;
        return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
    }
        
    int tribonacci(int n) 
    {
        vector<int> dp(n+1,-1);    
        return helper(n,dp);
    }
    int helper(int n,vector<int> &dp) 
    {
        if(n==0 or n==1)
            return n;
        if(n==2)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=helper(n-1,dp)+helper(n-2,dp)+helper(n-3,dp);
    }
};