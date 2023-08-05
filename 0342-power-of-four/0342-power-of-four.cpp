class Solution
{
    public:
        bool isPowerOfFour(int n)
        {
            double x = log2(n);
            return (x / 2) - floor(x / 2) == 0;
        }
};