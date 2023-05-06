class Solution {
public:
    void inorder(TreeNode* r,TreeNode* p,TreeNode* gp,int &ans)
    {
        if(r)
        {
            inorder(r->left,r,p,ans);
            if(gp and gp->val%2==0)
                ans+=r->val;
            inorder(r->right,r,p,ans);
        }
    }
    int sumEvenGrandparent(TreeNode* r) {
        int ans=0;
        inorder(r,NULL,NULL,ans);
        return ans;
    }
};