
class Solution {
public:
    void flatten1(TreeNode* root) {
        if(!root || root->left==NULL && root->right==NULL)
            return ;
        
        flatten(root->left);
        flatten(root->right);
        
        TreeNode* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        TreeNode* h=root;
        while(h->right!=NULL)
            h=h->right;
        h->right=temp;
    }
    
     void flatten(TreeNode* root) 
     {
         if(!root)
             return ;
         
        stack<TreeNode*> s;
        s.push(root);
         
         while(!s.empty())
         {
             TreeNode* cur = s.top(); 
             s.pop();
             
             if(cur->right)
                 s.push(cur->right);
              if(cur->left)
                 s.push(cur->left);
             
             if(!s.empty())
             cur->right=s.top();
             
             cur->left=NULL;
         }
     }
};