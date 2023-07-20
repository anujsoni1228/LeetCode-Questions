class Solution {
public:
    bool helper(string &x, string &y, string &mix, int i, int j, int k, vector<vector<vector<int>>> &dp) {
        if (k < 0) {
            return (i < 0 && j < 0);
        }
        if (dp[i + 1][j + 1][k + 1] != -1) return dp[i + 1][j + 1][k + 1];
        if (i >= 0 && j >= 0 && x[i] == y[j]) {
            if (x[i] == mix[k]) {
                return dp[i + 1][j + 1][k + 1] = helper(x, y, mix, i - 1, j, k - 1, dp) ||
                                                 helper(x, y, mix, i, j - 1, k - 1, dp);
            } else {
                return dp[i + 1][j + 1][k + 1] = false;
            }
        } else if (i >= 0 && x[i] == mix[k]) {
            return dp[i + 1][j + 1][k + 1] = helper(x, y, mix, i - 1, j, k - 1, dp);
        } else if (j >= 0 && y[j] == mix[k]) {
            return dp[i + 1][j + 1][k + 1] = helper(x, y, mix, i, j - 1, k - 1, dp);
        }
        return dp[i + 1][j + 1][k + 1] = false;
    }

    bool isInterleave(string x, string y, string mix) {
        vector<vector<vector<int>>> dp(x.size() + 1, vector<vector<int>>(y.size() + 1, vector<int>(mix.size() + 1, -1)));
        return helper(x, y, mix, x.size() - 1, y.size() - 1, mix.size() - 1, dp);
    }
};
