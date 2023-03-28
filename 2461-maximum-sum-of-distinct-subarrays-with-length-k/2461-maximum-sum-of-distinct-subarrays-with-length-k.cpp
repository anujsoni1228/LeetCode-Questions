class Solution {
public:
 /*
Approach is to store the elements in a map and using sliding window technique
check if the size of map is equal to k on each window. The window which has map size equal to k
is having distict elements.

1. Store first k elements in the map.
2. Then keep traversing through the array and adding the new one to the map and 
removing the old one(i-k th) element form the map if its count is zero.
3. Do same for the total sum, add ith value and remove i-k th value.
4. Maximize ans by taking max sum value. 
*/
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int,int> s;
        long long sum=0,mx=0;
        
        // store first k elements in the map
        for(int i=0;i<k;i++)
            s[nums[i]]++,sum+=nums[i];
        
        // sliding window
        for(int i=0;i+k<nums.size();i++)
        {
            // if window size and map size same means all distinct
            if(s.size()==k)
                mx=max(mx,sum);
            
            s[nums[i]]--;
            // need to remove if frequency of some element becomes 0
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