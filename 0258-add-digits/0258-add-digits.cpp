class Solution
{
    public:
        int addDigits(int num)
        {
            while (num >= 10)
            {
                int x = num;
                num = 0;
                while (x) num += x % 10, x /= 10;
            }
            return num;
        }
};