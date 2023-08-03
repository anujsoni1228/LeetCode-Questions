class Solution
{
    public:
        bool isPowerOfTwo(int n)
        {
            double x = log2(n);
            return x - floor(x) == 0;
        }
};