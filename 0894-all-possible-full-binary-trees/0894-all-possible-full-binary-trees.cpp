class Solution {
public:
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