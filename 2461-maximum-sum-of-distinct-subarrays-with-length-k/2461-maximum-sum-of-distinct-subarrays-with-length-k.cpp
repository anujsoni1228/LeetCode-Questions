class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> s;
        long long sum=0,mx=0;
        for(int i=0;i<k;i++)
            s[nums[i]]++,sum+=nums[i];
        for(int i=0;i+k<nums.size();i++)
        {
            if(s.size()==k)
                mx=max(mx,sum);
            s[nums[i]]--;
            if(s[nums[i]]==0)
                s.erase(nums[i]);
            sum-=nums[i];
            s[nums[i+k]]++;
            sum+=nums[i+k];
        }
        if(s.size()==k)
                mx=max(mx,sum);
        return mx;
    }
};