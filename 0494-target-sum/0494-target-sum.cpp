class Solution {
public:
    int helper(vector<int>& nums, int &t,int sum,int n)
    {        
        if(n==0)
        {
            if(sum==t)
                return 1;
            return 0;
        }      
        return helper(nums,t,sum+nums[n-1],n-1)+helper(nums,t,sum-nums[n-1],n-1);
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        return helper(nums,t,0,nums.size());
    }
};