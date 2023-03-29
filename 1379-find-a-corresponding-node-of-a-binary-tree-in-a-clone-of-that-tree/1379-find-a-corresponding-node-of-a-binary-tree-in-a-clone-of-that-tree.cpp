class Solution {
public:
    // dono me sath me inorder traversal chalaya he p
    TreeNode* ans;
    TreeNode* inorder(TreeNode* o, TreeNode* c, TreeNode* t)
    {
        if(o)
        {
            inorder(o->left,c->left,t);
            if(o==t) ans=c;
            inorder(o->right,c->right,t);
        }
        return NULL;
    }
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* t) {
        inorder(o,c,t);
        return ans;
    }
};