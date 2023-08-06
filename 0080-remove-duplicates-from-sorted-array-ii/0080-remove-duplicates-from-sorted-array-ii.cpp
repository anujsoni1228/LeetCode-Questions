class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            int i = 0, j = 0;
            unordered_map<int, int> m;
            while (j < nums.size())
            {
                m[nums[j]]++;
                if (m[nums[j]] <= 2)
                {
                    nums[i] = nums[j];
                    i++;
                }
                j++;
            }
            return i;
        }
};