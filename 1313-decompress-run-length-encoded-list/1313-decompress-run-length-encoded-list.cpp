class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i+1<nums.size();i+=2)
        {
            int f=nums[i];
            while(f--)ans.push_back(nums[i+1]);                
        }
        return ans;
    }
};