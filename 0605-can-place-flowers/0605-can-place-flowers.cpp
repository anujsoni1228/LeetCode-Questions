class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int N) {
        int n=nums.size(),l,r;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                l=0;
            else 
                l=nums[i-1];

            if(i==n-1)
                r=0;
            else 
                r=nums[i+1];

            if(l==0 and r==0 and nums[i]==0)
                N--,nums[i]=1;
        }    
        return (N<=0);
    }
};