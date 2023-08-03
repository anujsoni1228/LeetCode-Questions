class Solution
{
    public:
        int addDigits1(int num)
        {
            while (num >= 10)
            {
                int x = num;
                num = 0;
                while (x) num += x % 10, x /= 10;
            }
            return num;
        }
    int addDigits(int num)
    {
        if (num == 0) return 0;
        if (num % 9 == 0) return 9;
        else return num % 9;
    }
};