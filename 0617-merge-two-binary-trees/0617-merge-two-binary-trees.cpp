class Solution {
public:
    TreeNode* mergeTrees(TreeNode* a, TreeNode* b) {
        if(!a and !b)
            return NULL;
        if(!a)
            return b;
        if(!b)
            return a;
        a->val+=b->val;
        a->left=mergeTrees(a->left,b->left);
        a->right=mergeTrees(a->right,b->right);
        return a;
    }
};