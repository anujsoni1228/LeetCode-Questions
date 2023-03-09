class Solution {
public:
    // same logic lagaya he 
    // kisi bhi element ke agal bagal wale 2 subarrays me se ek to sorted hoga hi, atleast ek to sorted hoga hi maximum dono bhi sorted ho skte he
    
    int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        int l=0,h=n-1;
        
        // edge case
        if(n==1)
            return nums[0];
        // edge case
        else if(n==2)
            return nums[nums[0]>nums[1]];
        
        // binary srch
        while(l<=h)
        {
            // if the whole array is sorted then the leftmost is the minimum
            if(nums[l]<nums[h])
                return nums[l];
            
            // else find mid and identify which part is sorted
            else
            {
                int mid=l+(h-l)/2;
                // if mid is the ans (then it's previous element will be >> than it)
                if(mid-1>=0 and nums[mid]<nums[mid-1])
                    return nums[mid];
                else
                {
                    // if left part is sorted (go to right)
                    if(nums[l]<=nums[mid])
                        l=mid+1;
                    // if right part is sorted (go to left)
                    else
                        h=mid-1;
                }
            }
        }
        return l;
    }
};