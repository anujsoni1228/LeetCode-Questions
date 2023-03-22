class Solution {
public:
    int fib1(int n) {
        if(n==0 || n==1)
            return n;
        return fib(n-1)+fib(n-2);
    }
    
    int help(int n,vector<int> &dp)
    {
        if(n==0 || n==1)
            return dp[n]=n;
        if(dp[n]!=-1)
            return dp[n];
        else
            return dp[n]=help(n-1,dp)+help(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return help(n,dp);
    }
    
};