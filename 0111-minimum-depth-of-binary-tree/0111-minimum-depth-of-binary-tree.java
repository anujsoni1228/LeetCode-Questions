class Solution {
    int ans = Integer.MAX_VALUE;

    private void dfs(TreeNode r, int d) {
        if (r == null) {
            return;
        }
        if (r.left == null && r.right == null) {
            ans = Math.min(ans, d);
            return;
        }
        dfs(r.left, d + 1);
        dfs(r.right, d + 1);
    }

    public int minDepth(TreeNode r) {
        dfs(r, 1);
        return ans == Integer.MAX_VALUE ? 0 : ans;
    }
}
