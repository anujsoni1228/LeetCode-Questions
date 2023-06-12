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
        
        // main concept here
        // ans me l+r+root->val isko include krna he lekin 
        // return krte time isko include nahi krna he 
        int x=max(max(l+r+root->val,root->val),max(root->val+l,root->val+r));
        ans=max(ans,x);
        return max(root->val,max(root->val+l,root->val+r));
    }
    int maxPathSum(TreeNode* r) {
        int ans=INT_MIN;
        solve(r,ans);
        return ans;
    }

};