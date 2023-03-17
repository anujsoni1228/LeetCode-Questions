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
  
  
//     ye question mujhe pehli bar me nahi hua tha
//     isme recursion lag rha he
//     left wale ko right se compare krege
//     or right wale ko left se compare krenge
    
//     ek bar easy example me code ko dry run krna shant dimag se...
//     smjh aa jayega
  
  
  // alag se recursive function banaya he
    bool solve(TreeNode* l,TreeNode *r)
    {
        if(l==NULL && r==NULL)
            return 1;//base case 1(agar dono null --> mirror image)
        
        if(l==NULL || r==NULL)
            return 0; //base case 2 
        
        if(l->val==r->val)  
// agar dono ki value barabar aagyi to ek ke left se dusre ke right ko compare krenge or dusre ke left se pehle ke right ko compare krenge by calling same recursive function  
            if(solve(l->left,r->right) && solve(l->right,r->left))
                return 1;
        return 0;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return 1;
        return solve(root->left,root->right);
    }
};