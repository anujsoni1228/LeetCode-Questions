/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int s=0;
    void inorder(TreeNode* r, int &l, int &h)
    {
        if(r)
        {
            inorder(r->left,l,h);
            if(l<=r->val and h>=r->val)s+=r->val;
            inorder(r->right,l,h);
        }
    }
    int rangeSumBST(TreeNode* r, int l, int h) {
        inorder(r,l,h);
        return s;
    }
};