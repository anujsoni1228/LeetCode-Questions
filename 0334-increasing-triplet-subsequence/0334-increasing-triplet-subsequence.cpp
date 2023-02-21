class Solution {
public:
    // time = O(2N) --> O(N)
    // space = O(2N) --> O(N)

    bool increasingTriplet1(vector<int>& nums) {
        // make two separate arrays 
        // left min and right max
        int n=nums.size();
        vector<int> left(n),right(n);

        int mn=INT_MAX;
        int mx=INT_MIN;

        for(int i=0;i<n;i++)
        {
            // calculate left min
            mn=min(mn,nums[i]);
            left[i]=mn;
            // calculate right max
            mx=max(mx,nums[n-i-1]);           
            right[n-i-1]=mx;
        }
        
        // for each element check if
        // there exists left min and right max
        for(int i=0;i<n;i++){
            if(left[i]<nums[i]&&nums[i]<right[i])
                return true;
        }
        return 0;
    }

    

    // approach
    // keep check of these three things
    // 1. minimum untill now (leftMin)
    // 2. One which is minimun (second minimum)
    //    but greater than leftMin
    // 3. If you find anything greater than middle one
    //    it means you've found the triplet
    
    // time = O(N)
    // space = O(1)
    bool increasingTriplet(vector<int>& nums)
    {
        int leftMin=INT_MAX,mid=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<=leftMin)//  minimum
                leftMin=nums[i];
            else if(nums[i]<=mid) //   secomd minimum
                mid=nums[i];
            else          // found third minimum
                return true;
        }
        return false;
    }
};