class Solution {
public:
    int solve(TreeNode* root,int &ans)
    {
        if(!root)
            return 0; 
        
        // calculate left result
        int l=solve(root->left,ans);
        // calculate right result
        int r=solve(root->right,ans);
        
        int x=max(root->val,max(root->val+l,root->val+r));
        ans=max(ans,max(x,root->val+r+l));
        return x;
    }
    int maxPathSum(TreeNode* r) {
        int ans=INT_MIN;
        solve(r,ans);
        return ans;
    }

};