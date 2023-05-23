class Solution {
public:
    // int helper(vector<int>& nums, int &t,int sum,int n,vector<vector<int>> &dp)
    // {        
    //     if(n==0)
    //     {
    //         if(sum==t)
    //             return 1;
    //         return 0;
    //     }  
    //     if(dp[n][sum+1002]!=-1)
    //         return dp[n][sum+1002];
    //     return dp[n][sum+1002]=helper(nums,t,sum+nums[n-1],n-1,dp)+helper(nums,t,sum-nums[n-1],n-1,dp);
    // }
    // int findTargetSumWays(vector<int>& nums, int t) {
    //     int s=0;
    //     for(auto i:nums)s+=i;
    //     vector<vector<int>> dp(nums.size()+1,vector<int>(2004,-1));
    //     return helper(nums,t,0,nums.size(),dp);
    // }
    
//     int findTargetSumWays(vector<int>& nums, int t) {
//         int s=0;
//         for(auto i:nums)s+=i;
//         vector<vector<int>> dp(nums.size()+1,vector<int>(2004,0));
               
//         for(int i=1;i<=nums.size();i++)
//         {
//             for(int j=0;j<1001;j++)
//             {
//                 dp[i][j+1002]=dp[i-1][j+nums[i-1]+1002]+dp[i-1][j-nums[i-1]+1002];
//             }
//         }
//         return dp[nums.size()][0];
//     }
    
    int countPartitions(int n, int d, vector<int>& arr) {
        int sum=0;
        for(auto i:arr)sum+=i;
        if((d+sum)%2 != 0) return 0;
        int t=(d+sum)/2;
        vector<vector<int>> dp(n+1,vector<int> (t+1,0));
        dp[0][0]=1;
        for(int i=1;i<n+1;i++)
        {
            for(int j=0;j<t+1;j++)
            {
                if(arr[i-1] <= j)
                    dp[i][j]=(dp[i-1][j-arr[i-1]] + dp[i-1][j]);
                else 
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][t];
    }
    int findTargetSumWays(vector<int>& nums, int t) {
        return countPartitions(nums.size(),abs(t),nums);
    }
    
};
