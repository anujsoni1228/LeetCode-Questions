class Solution {
public:
    bool canPlaceFlowers(vector<int>& nums, int N) {
        int n=nums.size();
        bool l,r;
        for(int i=0;i<n;i++)
        {
            l = (i==0)   ? 0 : nums[i-1] ;
            r = (i==n-1) ? 0 : nums[i+1] ;
            
            if(l==0 and r==0 and nums[i]==0)
                N--,nums[i]=1;
        }    
        return (N<=0);
    }
};