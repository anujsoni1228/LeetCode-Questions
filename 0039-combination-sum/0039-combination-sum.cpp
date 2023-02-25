class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& c, int t,vector<int> bag,int i)
    {
        if(t<0 || i>=c.size()) return;
        if(0==t)  { ans.push_back(bag); return; }       
        helper(c,t,bag,i+1);
        bag.push_back(c[i]);
        helper(c,t-c[i],bag,i);        
    }    
    vector<vector<int>> combinationSum(vector<int>& c, int t) 
    {
        vector<int> bag;
        sort(c.begin(),c.end());
        helper(c,t,bag,0);
        return ans;
    }
};