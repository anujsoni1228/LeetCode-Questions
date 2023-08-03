/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        void dfs(TreeNode *r, vector<string> &ans, string temp)
        {
            if (!r)
            {
                return;
            }
            if (r->left==NULL and r->right==NULL)
            {
                temp = temp + "->" + to_string(r->val);
                temp.erase(0,2);
                ans.push_back(temp);
                return;
            }
            temp = temp + "->" + to_string(r->val);
            dfs(r->left,ans,temp);
            dfs(r->right,ans,temp);
        }
    vector<string> binaryTreePaths(TreeNode *r)
    {
        vector<string> ans;
        dfs(r, ans, "");
        return ans;
    }
};