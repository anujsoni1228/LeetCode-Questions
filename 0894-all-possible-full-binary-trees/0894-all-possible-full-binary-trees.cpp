class Solution {
public:
    /* imp observation
        
    full binary tree (FBT) always has an odd number of nodes.
    
    checks if 'n' is even, and if it is, immediately return an empty vector since it's not possible to create a full binary tree with an even number of nodes
    
    If 'n' is odd, we initialize an empty vector 'ans' to store the generated FBTs.

    We iterate from 2 to 'n+1' with a step size of 2 (to maintain ODD wala observation). We use 'i' to split the nodes into the left and right subtrees.
        
    n=7
    -----------------------------------
    
        1  2  3  4  5  6  7  8  9 
           ↑      
           
        1  2  3   4   5  6  7  8  9 
        <----->   ↑  <------------>   
        (left    (i)     (right
        subtree)         subtree)
                 
        1  2  3  4  5  6  7  8  9 
                       ↑      
        1  2  3  4  5  6  7  8  9 
                             ↑ 

    For each 'i', we recursively call the 'allPossibleFBT' function to generate all possible left subtrees with 'i-1' nodes.

    We also recursively call the 'allPossibleFBT' function to generate all possible right subtrees with 'n-i' nodes.

    We then iterate through each combination of left and right subtrees and create a new TreeNode object with value 0.

    We assign the left and right subtrees to the newly created node and add it to the 'ans' vector.
    
    Finally, we return the 'ans' vector containing all the generated FBTs.
*/

    
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n==1)
            return {new TreeNode(0)};
        if(n%2==0)
            return {};
        vector<TreeNode*> ans;
        for(int i=2;i+2<=n+1;i+=2)
        {
            vector<TreeNode*> left=allPossibleFBT(i-1);
            vector<TreeNode*> right=allPossibleFBT(n-i);         
            for(int i=0;i<left.size();i++)
            {
                for(int j=0;j<right.size();j++)
                {
                    TreeNode *n=new TreeNode(0);
                    n->left=left[i];
                    n->right=right[j];
                    ans.push_back(n);
                }
            }            
        }
        return ans;        
    }
};