class Solution {
// greedy solution with idea of DFS
// starj stores the position of last * in p
// last_match stores the position of the previous matched char in s after a *
// e.g. 
// s: a c d s c d
// p: * c d
// after the first match of the *, starj = 0 and last_match = 1
// when we come to i = 3 and j = 3, we know that the previous match of * is actually wrong, 
// (the first branch of DFS we take is wrong)
// then it resets j = starj + 1 
// since we already know i = last_match will give us the wrong answer
// so this time i = last_match+1 and we try to find a longer match of *
// then after another match we have starj = 0 and last_match = 4, which is the right solution
// since we don't know where the right match for * ends, we need to take a guess (one branch in DFS), 
// and store the information(starj and last_match) so we can always backup to the last correct place and take another guess.

    public boolean isMatch(String s1, String p1) {
        char[] s = s1.toCharArray();
        char[] p = p1.toCharArray();

        int i = 0, j = 0, starj = -1, lastMatch = -1;
        while (i < s.length) {
            if (j < p.length && (s[i] == p[j] || p[j] == '?')) {
                i++;
                j++;
            } else if (j < p.length && p[j] == '*') {
                starj = j;
                lastMatch = i;
                j++;
            } else if (starj != -1) {
                j = starj + 1;
                i = ++lastMatch;
            } else {
                return false;
            }
        }
        while (j < p.length && p[j] == '*') j++;
        return j == p.length;
    }
}
