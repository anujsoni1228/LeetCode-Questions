class Solution {
public:
    
    bool subset(vector<int>& nums,int i,int t,vector<vector<int>> &dp)
    {
        if(i>=nums.size() || t<0)
            return 0;
        if(t==0)
            return dp[i][t]=1;
        
        if(dp[i][t]!=-1)
            return dp[i][t];
        
        return dp[i][t] = subset(nums,i+1,t,dp) || subset(nums,i+1,t-nums[i],dp);
    }
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)sum+=i;
        if(sum%2==1)
            return 0;
        else
        {
            vector<vector<int>> dp(nums.size(),vector<int>(sum/2+1,-1));
            return subset(nums,0,sum/2,dp);
        }
    }
};