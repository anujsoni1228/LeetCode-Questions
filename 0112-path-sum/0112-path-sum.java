class Solution {
    boolean ans = false;

    private void has(TreeNode r, int s, int t) {
        if (r == null) return;
        if (r.left == null && r.right == null) {
            if (!ans) ans = (s + r.val == t);
        }
        has(r.left, s + r.val, t);
        has(r.right, s + r.val, t);
    }

    public boolean hasPathSum(TreeNode r, int t) {
        has(r, 0, t);
        return ans;
    }
}
