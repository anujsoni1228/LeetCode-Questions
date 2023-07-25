class Solution {

    public int maximizeSum(int[] n, int k) {
        int m = 0, i = 0;
        while (i < n.length) m = Math.max(m, n[i++]);
        return (m + k - 1) * (m + k) / 2 - (m - 1) * m / 2;
    }
}
