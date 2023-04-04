class Solution {
public:
    void inorder(TreeNode* r,unordered_map<int,int> &m,int h)
    {
        if(r)
        {
            inorder(r->left,m,h+1);
            m[h]+=r->val;
            inorder(r->right,m,h+1);         
        }
    }
    int deepestLeavesSum(TreeNode* r) {
        unordered_map<int,int> m;
        inorder(r,m,0);
        for(auto i:m)
            cout<<i.first<<"->"<<i.second<<endl;
        return m[m.size()-1];
    }
};