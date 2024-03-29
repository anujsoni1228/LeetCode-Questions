class Solution {

// How is Matrix built :
// The matrix is built iteratively using the following recurrence relation:
    
// If word1[i-1] == word2[j-1], then dp[i][j] = dp[i-1][j-1]. That is, no operation is required because the characters at positions i-1 and j-1 are already the same.
    
// Otherwise, dp[i][j] is the minimum of the following three values:
    
// dp[i-1][j-1] + 1: replace the character at position i-1 in word1 with the character at position j-1 inword2.
// dp[i-1][j] + 1: delete the character at position i-1 in word1.
// dp[i][j-1] + 1: insert the character at position j-1 in word2 into word1 at position i.
    
// The base cases are:
// dp[i][0] = i: transforming word1[0...i-1] into an empty string requires i deletions.
// dp[0][j] = j: transforming an empty string into word2[0...j-1]requires j insertions.
    
    public int minDistance(String a, String b) {
        int[][] dp = new int[a.length() + 1][b.length() + 1];
        for (int i = 0; i <= a.length(); i++) {
            for (int j = 0; j <= b.length(); j++) {
                if (i == 0) {
                    dp[i][j] = j;
                } else if (j == 0) {
                    dp[i][j] = i;
                } else if (a.charAt(i - 1) == b.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + Math.min(dp[i - 1][j - 1], Math.min(dp[i][j - 1], dp[i - 1][j]));
                }
            }
        }
        return dp[a.length()][b.length()];
    }
}
