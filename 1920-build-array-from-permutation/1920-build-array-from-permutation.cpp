class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[i]=(nums[nums[i]]);
        }
        return vector<int> (ans,ans+n);
    }
};