class Solution {

    // make a dp table
    // for each cell fill this -> (how many SQUARE matrix ending at this cell as right bottom corner)
    // for first row and first col fill as it is
    // for remaining non zero cells
    // min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]) + 1;
    // min isliye kyuki humko square matrix banana he to jo banda sabse kam wala he usko leke chlna pdega
    

    public int countSquares(int[][] M) {
        int m = M.length;
        int n = M[0].length;
        int ans = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0) {
                    ans += M[i][j];
                } else {
                    if (M[i][j] != 0) M[i][j] += Math.min(M[i - 1][j - 1], Math.min(M[i][j - 1], M[i - 1][j]));
                    ans += M[i][j];
                }
            }
        }
        return ans;
    }
}
