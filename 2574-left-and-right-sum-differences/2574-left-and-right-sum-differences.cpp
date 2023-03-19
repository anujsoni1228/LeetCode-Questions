class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum=0,n=nums.size(),l=0;
        for(auto i:nums)sum+=i;
        for(int i=0;i<n;i++)
        {
            int t=nums[i];
            nums[i]=abs(l-(sum-=nums[i]));
            l+=t;
        }
        return nums;
    }
};