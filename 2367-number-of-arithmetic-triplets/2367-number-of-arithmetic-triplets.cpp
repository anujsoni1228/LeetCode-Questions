class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]+diff)!=s.end() and s.find(nums[i]+2*diff)!=s.end())
                ans++;
        }
        return ans;
    }
};