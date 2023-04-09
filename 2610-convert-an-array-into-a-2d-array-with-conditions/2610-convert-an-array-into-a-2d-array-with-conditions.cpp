class Solution {
public:
    // straight forward solution
    // find freq of all elements and then 
    // fill them accordingly
    vector<vector<int>> findMatrix(vector<int>& n) {
        unordered_map<int,int> m;
        int mx=INT_MIN;
        for(auto i:n)m[i]++,mx=max(mx,m[i]);
        vector<vector<int>> ans(mx);
        for(auto i:m)
            while(i.second-->0)
                ans[i.second].push_back(i.first);           
        return ans;
    }
};