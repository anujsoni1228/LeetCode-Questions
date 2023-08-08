class Solution
{
    public:
        bool isPerfectSquare(int n)
        {
            int l = 1, r = n;
            while (l <= r)
            {
                long long m = l + (r - l) / 2;
                if (m * m == n) return true;
                else if (m * m > n) r = m - 1;
                else l = m + 1;
            }
            return false;
        }
};