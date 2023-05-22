class Solution {
public:
    int helper(vector<int>& nums, int &t,int sum,int n,vector<vector<int>> &dp)
    {        
        if(n==0)
        {
            if(sum==t)
                return 1;
            return 0;
        }  
        if(dp[n][sum+1002]!=-1)
            return dp[n][sum+1002];
        return dp[n][sum+1002]=helper(nums,t,sum+nums[n-1],n-1,dp)+helper(nums,t,sum-nums[n-1],n-1,dp);
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        int s=0;
        for(auto i:nums)s+=i;
        vector<vector<int>> dp(nums.size()+1,vector<int>(2004,-1));
        return helper(nums,t,0,nums.size(),dp);
    }
};