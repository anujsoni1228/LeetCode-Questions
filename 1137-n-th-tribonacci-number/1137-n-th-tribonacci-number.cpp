class Solution {
public:
    
    
//     int tribonacci1(int n) 
//     {
//         if(n==0 || n==1)
//             return n;
//         if(n==2)
//             return 1;
//         return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
//     }
        
//     int tribonacci(int n) 
//     {
//         vector<int> dp(n+1,-1);    
//         return helper(n,dp);
//     }
//     int helper(int n,vector<int> &dp) 
//     {
//         if(n==0 or n==1)
//             return n;
//         if(n==2)
//             return 1;
//         if(dp[n]!=-1)
//             return dp[n];
//         return dp[n]=helper(n-1,dp)+helper(n-2,dp)+helper(n-3,dp);
//     }
    
    int tribonacci(int n) 
    {
        vector<int> dp(4);
        dp[1]=1,dp[2]=1;
        for(int i=3;i<=n;i++)
            dp[i%4]=dp[(i-1)%4]+dp[(i-2)%4]+dp[(i-3)%4];
        return dp[n%4];
    }
    
};