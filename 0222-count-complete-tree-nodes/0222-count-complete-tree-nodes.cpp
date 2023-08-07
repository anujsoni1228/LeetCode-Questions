class Solution
{
    public:
        int countNodes(TreeNode *r)
        {
            if (!r) return 0;
            return countNodes(r->left) + countNodes(r->right) + 1;
        }
};