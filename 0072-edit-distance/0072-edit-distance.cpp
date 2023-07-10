class Solution
{
    public:
        int helper(string &a, string &b, int m, int n, vector<vector < int>> &dp)
        {
            if (dp[m][n] != -1) return dp[m][n];
            if (m == 0)
            {
                return dp[m][n] = n;
            }
            if (n == 0)
            {
                return dp[m][n] = m;
            }

            if (a[m - 1] == b[n - 1])
            {
                return dp[m][n] = helper(a, b, m - 1, n - 1,dp);
            }
            else
            {
                return dp[m][n] = 1 + min(helper(a, b, m - 1, n - 1, dp), 
                                         min(helper(a, b, m, n - 1, dp),
                                              helper(a, b, m - 1, n, dp)));
            }
        }
    int minDistance(string a, string b)
    {
        vector<vector < int>> dp(a.size() + 1, vector<int> (b.size() + 1, -1));
        return helper(a, b, a.size(), b.size(), dp);
    }
};