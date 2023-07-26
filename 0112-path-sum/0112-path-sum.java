class Solution {
    boolean ans;
    
    void has(TreeNode r, int s, int t) {
        if (r == null) return;
        s += r.val;
        if (r.left == null && r.right == null && !ans) ans = s == t;
        if (r.left != null) has(r.left, s, t);
        if (r.right != null) has(r.right, s, t);
    }

    public boolean hasPathSum(TreeNode r, int t) {
        has(r, 0, t);
        return ans;
    }
}
