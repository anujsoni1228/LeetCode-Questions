class Solution {
public:
    int subarraySum1(vector<int>& nums, int k) {
         int n=nums.size(),ans=0;
         for(int i=0;i<n;i++)
         {
             int sum=0;
             for(int j=i;j<n;j++)
             {
                 sum+=nums[j];
                 if(sum==k)
                    ans++;
             }
         }
         return ans;
        
        
        
        
        
        
        
    }
    
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),ans=0,sum=0;
        unordered_map<int,int> m;
        m[0]=1;
         for(int i=0;i<n;i++)
         {
             sum+=nums[i];
             if(m.find(sum-k)!=m.end())
                ans+=m[sum-k];
             m[sum]++;
         }
         return ans;         
    }
};