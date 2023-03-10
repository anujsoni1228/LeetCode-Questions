class Solution {
public:
    
//     bool subset(vector<int>& nums,int i,int t,vector<vector<int>> &dp)
//     {
//         if(i>=nums.size() || t<0)
//             return 0;
//         if(t==0)
//             return dp[i][t]=1;
        
//         if(dp[i][t]!=-1)
//             return dp[i][t];
        
//         return dp[i][t] = subset(nums,i+1,t,dp) || subset(nums,i+1,t-nums[i],dp);
//     }
    
    // bool canPartition(vector<int>& nums) {
    //     int sum=0;
    //     for(auto i:nums)sum+=i;
    //     if(sum%2==1)
    //         return 0;
    //     else
    //     {
    //         vector<vector<int>> dp(nums.size(),vector<int>(sum/2+1,-1));
    //         return subset(nums,0,sum/2,dp);
    //     }
    // }
    
    // bool canPartition(vector<int>& nums) {
    //     int sum=0,n=nums.size();        
    //     for(auto i:nums)sum+=i;
    //     if(sum%2==1)
    //         return 0;
    //     else
    //     {
    //         vector<vector<bool>> dp(n+1,vector<bool>(sum/2+1));
    //         for(int i=0;i<=n;i++)
    //             dp[i][0]=1;
    //         for(int i=n-1;i>=0;i--)
    //         {
    //             for(int j=0;j<=sum/2;j++)
    //             {
    //                 bool x=0;
    //                 if(j-nums[i]>=0)
    //                     x=dp[i+1][j-nums[i]];
    //                 dp[i][j]=dp[i+1][j]||x;
    //             }
    //         }
    //         return dp[0][sum/2];
    //     }
    // }
    
    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();        
        for(auto i:nums)sum+=i;
        if(sum%2==1)
            return 0;
        else
        {
            
            vector<bool> cur(sum/2+1);
            vector<bool> next(sum/2+1);
            
            next[0]=1;
            for(int i=n-1;i>=0;i--)
            {
                for(int j=0;j<=sum/2;j++)
                {
                    bool x=0;
                    if(j-nums[i]>=0)
                        x=next[j-nums[i]];
                    cur[j]=next[j]||x;
                }
                swap(next,cur);                
                
            }
            return cur[sum/2];
        }
    }
};