class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        vector<int> ans(p.size());
        ans[0]=p[0];
        for(int i=1;i<p.size();i++)
            ans[i]=p[i]^p[i-1];
        return ans;            
    }
};