
class Solution {
public:
    void inorder(TreeNode* r,int &ans)
    {
        if(r)
        {
            inorder(r->right,ans);
            r->val=(ans+=r->val);
            inorder(r->left,ans);
        }
    }
    TreeNode* bstToGst(TreeNode* r) {
        int ans=0;
        inorder(r,ans);
        return r;
    }
};