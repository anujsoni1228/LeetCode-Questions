class Solution {
public:
    void helper(vector<int>& c, int t,vector<int> bag,vector<vector<int>>& ans,int i)
    {
        if(t<0 || i>=c.size()) return;
        if(0==t)  { ans.push_back(bag); return; }        
        vector<int> x=bag;
        x.push_back(c[i]);
        helper(c,t-c[i],x,ans,i);
        helper(c,t,bag,ans,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) 
    {
        vector<int> bag;
        vector<vector<int>> ans;
        helper(c,t,bag,ans,0);
        return ans;
    }
};