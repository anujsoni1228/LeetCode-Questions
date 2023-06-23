class Solution {
public:
    // The number of unique binary search trees with n nodes is calculated by recursively multiplying the number of unique binary search trees formed with i-1 nodes in the left subtree and n-i nodes in the right subtree, for i ranging from 1 to n, and summing up the results. Memoization is used to avoid redundant calculations.
    
    int helper(int n,vector<int> &dp) 
    {
        if(n==0)
            return 1;
        if(n==1 or n==2)
            return n;

        if(dp[n]!=-1)
            return dp[n];
        
        dp[n]=0;
        for(int i=1;i<=n;i++)
        {
            int chote=i-1;
            int bade=n-i;
            dp[n]+=helper(chote,dp)*helper(bade,dp);
        }
        return dp[n];
    }

    int numTrees(int n) 
    {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
    }
};