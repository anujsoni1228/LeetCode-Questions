class Solution {
public:
    vector<int> createTargetArray(vector<int>& n, vector<int>& ind) {
        vector<int> ans;
        for(int i=0;i<n.size();i++)
            ans.insert(ans.begin()+ind[i],n[i]);
        return ans;
    }
};