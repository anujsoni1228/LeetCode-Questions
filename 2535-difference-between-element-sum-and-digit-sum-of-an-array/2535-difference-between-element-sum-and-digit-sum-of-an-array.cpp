class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int s=0;
        for(auto i:nums)
        {
            s+=i;
            while(i)
                s-=i%10,i/=10;
        }
        return s;
    }
};