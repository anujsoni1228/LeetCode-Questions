class Solution {

    public boolean isMatch(String s, String p) {
        boolean[][] dp = new boolean[s.length() + 1][p.length() + 1];
        dp[s.length()][p.length()] = true;

        // this for loop for initialization is very impoprtant for this code
        // p me piche se jitne bhi stars he (lagatar wale un sabko 1 se
        //  initialize krna pdega ) in last row of dp baki sab thik h 
        for (int j = p.length() - 1; j >= 0; j--) {
            if (p.charAt(j) == '*') {
                dp[s.length()][j] = true;
            } else {
                break;
            }
        }

        for (int i = s.length() - 1; i >= 0; i--) {
            for (int j = p.length() - 1; j >= 0; j--) {
                if (s.charAt(i) == p.charAt(j) || p.charAt(j) == '?') {
                    dp[i][j] = dp[i + 1][j + 1];
                } else if (p.charAt(j) == '*') {
                    dp[i][j] = dp[i + 1][j] || dp[i][j + 1];
                }
            }
        }
        return dp[0][0];
    }
}
