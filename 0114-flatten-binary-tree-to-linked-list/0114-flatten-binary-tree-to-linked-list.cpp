
class Solution {
public:
    // my own recursie code
    // for each node do this :
    // make its left subtree flatten
    // make its right subtree flatten
    // save the reference of RST to temp
    // copy the reference of LST to root->right
    //  and find the rightMost Nde and append temp to it

    // handle the base case
    
    void flatten1(TreeNode* root) {
        
        // handle the base case
        if(!root || root->left==NULL && root->right==NULL)
            return ;
        
        // make its left subtree flatten
        flatten(root->left);
        // make its right subtree flatten
        flatten(root->right);
        
        // save the reference of RST to temp
        TreeNode* temp=root->right;
        // copy the reference of LST to root->right
        root->right=root->left;
        root->left=NULL;
        
         //  and find the rightMost Nde 
        TreeNode* h=root;
        while(h->right!=NULL)
            h=h->right;
        // and append temp to it
        h->right=temp;
     }
    
    
//     2nd appproach using Stack DS
//     push root to stack
    
//     while(!s.empty())
//         pop cur 
//         if right child exist -> push
//         if left child exist -> push
//         make cur's right point to stack's top
//         cur's left NULL
        
    void flatten2(TreeNode* root) 
     {
         if(!root || !root->left && !root->right)
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
    
    
    
    
    // third approach using O(1) space No Extra space
    // complicated to understand (intution wise)
    // undertand with dry run and striver video
    
    // for a node
    // if left doesnt exist (ye to achi bat he)
    // sidha right per chle jaoo
    // if left exist then find the left subtree's right most node
    // (go left then right-> right-> right->)
    // connect right to c's right
    // connect left NLR's "R" to right NLR's "N"
    // left ko right banao
    // left ko NULL banao
    // and go on....
    
     void flatten(TreeNode* root) 
     {
         TreeNode* c=root,*p;
         while(c)
         { 
             if(c->left)
             {
                 p=c->left;
                 while(p->right)p=p->right;
                 p->right=c->right;
                 c->right=c->left;
                 c->left=NULL;
             }
             c=c->right;
         }
     }
};