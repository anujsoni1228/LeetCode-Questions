class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int m=INT_MIN;
        vector<bool> ans;
        for(auto i:c)
            m=max(i,m);
        for(auto i:c)
            if(i+e>=m)
                ans.push_back(true);
            else
                ans.push_back(false);
        return ans;
    }
};