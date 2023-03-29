class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> c=nums;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> m;
        for(int i=n-1;i>=0;i--)
            m[nums[i]]=i;
        for(int i=n-1;i>=0;i--)
            nums[i]=m[c[i]];
        return nums;
    }
};