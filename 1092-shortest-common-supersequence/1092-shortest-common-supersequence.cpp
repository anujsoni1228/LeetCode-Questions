class Solution {
public:
    string lcs1(int x, int y, string s1, string s2) {
        string ans;
        vector<vector<int>> dp(x + 1, vector<int>(y + 1, 0));

        for (int i = 1; i <= x; i++) 
        {
            for (int j = 1; j <= y; j++) 
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        int i = x, j = y;
        while (i > 0 && j > 0) 
        {
            if (s1[i - 1] == s2[j - 1]) 
            {
                ans += s1[i - 1];
                i--;
                j--;
            }
            else 
            {
                if (dp[i - 1][j] > dp[i][j - 1])
                    i--;
                else
                    j--;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    string shortestCommonSupersequence(string a, string b) {
        string lcs = lcs1(a.size(), b.size(), a, b);
        string ans;

        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size() && k < lcs.size()) 
        {
            if (a[i] == b[j]) 
            {
                if (a[i] == lcs[k]) 
                {
                    ans += a[i];
                    i++;
                    j++;
                    k++;
                }
            } 
            else 
            {
                if (a[i] == lcs[k])
                {
                    ans += b[j];
                    j++;
                } 
                else if (b[j] == lcs[k]) 
                {
                    ans += a[i];
                    i++;
                } 
                else 
                {
                    ans += a[i];
                    ans += b[j];
                    i++;
                    j++;
                }
            }
        }

        while (i < a.size()) 
        {
            ans += a[i];
            i++;
        }

        while (j < b.size())
        {
            ans += b[j];
            j++;
        }
        return ans;
    }
};
