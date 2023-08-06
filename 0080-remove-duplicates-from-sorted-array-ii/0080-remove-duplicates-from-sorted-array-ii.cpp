class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int i = 0, j = 0, cf = 0, cn ;
            while (j < nums.size())
            {
                if (cn != nums[j]) cf = 0, cn = nums[j];
                cf++;
                if (cf <= 2)
                {
                    nums[i] = nums[j];
                    i++;
                }
                j++;
            }
            return i;
        }
};