class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int sum=0;
        for(auto i:nums)
            ans.push_back(sum+=i);
        return ans;
    }
};