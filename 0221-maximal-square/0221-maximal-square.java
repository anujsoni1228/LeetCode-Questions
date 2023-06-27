class Solution {

    // make a dp table
    // for each cell fill this -> (how many SQUARE matrix ending at this cell as right bottom corner)
    // for first row and first col fill as it is
    // for remaining non zero cells
    // min(dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]) + 1;
    // min isliye kyuki humko square matrix banana he to jo banda sabse kam wala he usko leke chlna pdega

    public int maximalSquare(char[][] M) {
        int ans = 0;
        for (int i = 0; i < M.length; i++) {
            for (int j = 0; j < M[0].length; j++) {
                if (!(i == 0 || j == 0)) 
                    M[i][j] += Math.min(M[i - 1][j - 1] - '0', 
                    Math.min(M[i][j - 1] - '0', M[i - 1][j] - '0')) * (M[i][j] - '0');
                ans = Math.max(M[i][j] - '0', ans);
            }
        }
        return ans * ans;
    }
}
