class Solution {
    boolean ans = true; // Set the initial value of 'ans' to true for a balanced tree.

    public int height(TreeNode r) {
        if (r == null) return -1;
        int lh = height(r.left); // Calculate the height of the left subtree.
        int rh = height(r.right); // Calculate the height of the right subtree.
        if (Math.abs(lh - rh) > 1) // Check if the current node is balanced.
            ans = false;
        return Math.max(lh, rh) + 1; // Return the height of the current node's subtree.
    }

    public boolean isBalanced(TreeNode r) {
        height(r);
        return ans;
    }
}
