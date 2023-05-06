class Solution {
public:
    int calculateGrandChild(TreeNode* r)
    {
        int ans=0;
        if(r->left and r->left->left)
            ans+=r->left->left->val;
        if(r->left and r->left->right)
            ans+=r->left->right->val;
        if(r->right and r->right->right)
            ans+=r->right->right->val;
        if(r->right and r->right->left)
            ans+=r->right->left->val;    
        
        return ans;
    }
    void inorder(TreeNode* r,int &ans)
    {
        if(r)
        {
            inorder(r->left,ans);
            if(r->val%2==0)
                ans+=calculateGrandChild(r);
            inorder(r->right,ans);
        }
    }
    int sumEvenGrandparent(TreeNode* r) {
        int ans=0;
        inorder(r,ans);
        return ans;
    }
};