class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n=nums.size();
        long long ans=0,c;
        for(int i=0;i<n;i++)
        {
            c=0;
            while(i<n and nums[i]==0)
                c++,i++;
            ans+=c*(c+1)/2;
        }
        return ans;
    }
};