class Solution {

    // 2D DP
    public int countVowelStrings_2D(int n) {
        int dp[][] = new int[n + 1][5];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < 5; j++) {
                dp[i][j] = (i == 1 ? 1 : dp[i - 1][j]) + (j == 1 ? 1 : dp[i][j - 1]);
            }
        }
        return dp[n][4];
    }

    // same thing using 1D dp
    public int countVowelStrings_1D(int n) {
        int dp[] = { 1, 1, 1, 1, 1 };
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < 5; j++) {
                dp[j] += dp[j - 1];
            }
        }
        return dp[4];
    }

    public int countVowelStrings(int n) {
        return (n + 4) * (n + 3) * (n + 2) * (n + 1) / 24;
    }
}
