class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        if(n==1)
            return nums[0];
        else if(n==2)
            return nums[nums[0]>nums[1]];
        while(l<=h)
        {
            if(nums[l]<nums[h])
                return nums[l];
            else
            {
                int mid=l+(h-l)/2;
                if(mid-1>=0 and nums[mid]<nums[mid-1])
                    return nums[mid];
                else
                {
                    if(nums[l]<=nums[mid])
                        l=mid+1;
                    else
                        h=mid-1;
                }
            }
        }
        return l;
    }
};