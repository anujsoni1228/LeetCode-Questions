class Solution {
public:
    vector<int> buildArray1(vector<int>& nums) {
        int n=nums.size();
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[i]=(nums[nums[i]]);
        }
        return vector<int> (ans,ans+n);
    }
    
    vector<int> buildArray(vector<int>& nums) 
    {
        int n=nums.size();
        for(int i=0;i<n;i++)
            nums[i]=(nums[nums[i]]%10000)*10000+nums[i];
        for(int i=0;i<n;i++)
            nums[i]/=10000;
        return nums;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};