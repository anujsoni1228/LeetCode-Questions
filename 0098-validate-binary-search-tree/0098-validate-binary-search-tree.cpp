class Solution {
public:
//  simply inorder traversal nikal lo or dekh lo ki inorder traversal increasing order me hona chahiye , agr nhi he to it means it is not a valid BST
//  or inorder traversal nikalne ke liye pura array bhi banane ki zrurt nhi he 
//  only a single variable is sufficient
//  a variable prev that will store the prev value during recursion agar upcoming value is smaller than prev it means increasion nhi he 

    bool f=1;
    long int prev=-2147483649;
    void inorder(TreeNode* root)
    {
        if(!root)
            return;
        inorder(root->left);
        root->val<=prev?f=0:prev=root->val;
        inorder(root->right);        
    }
    bool isValidBST(TreeNode* root) 
    {
       inorder(root);
       return f;
    }
};