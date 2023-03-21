class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        long long ans=0,c;
        for(int i=0;i<n;i++)
        {
            c=0;
            // count no. of continuous zeroes
            while(i<n and nums[i]==0)
                c++,i++;
            // sum of n natural numbers formula used
            ans+=c*(c+1)/2;
        }
        return ans;
    }
    
    
    // if c=6, means 6 contaguous zeroes are there
    // so [ 0,0,0,0,0,0 ]
    
    // 1 length wale = 6 [0]
    // 2 length wale = 5 [0,0]
    // 3 length wale = 4.. [0,0,0]
    //     and so on..
    // it means 6 + 5 + 4 + 3 + 2 + 1 will be total subarrays
}; 