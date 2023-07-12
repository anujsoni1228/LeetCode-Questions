class Solution {

    public int helper(int n, int e, int[][] dp) {
        if (n == 2) return 2;
        if (e == 0) return 0;
        if (e == 1) {
            return n;
        }
        if (n == 1) return 1;
        if (n <= 0) return 0;
        if (dp[n][e] != -1) return dp[n][e];
        int ans = Integer.MAX_VALUE;
        for (int i = 1; i <= n; i++) {
            ans = Math.min(ans, 1 + Math.max(helper(i - 1, e - 1, dp), helper(n - i, e, dp)));
        }
        return dp[n][e] = ans;
    }

    public int twoEggDrop(int n) {
        int[][] dp = new int[n + 1][3];
        Arrays.stream(dp).forEach(row -> Arrays.fill(row, -1));
        return helper(n, 2, dp);
    }
}
