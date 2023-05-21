class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<g.size();i++)
            m[g[i]].push_back(i);
        vector<vector<int>> ans;
        for(auto i:m)
        {
            int j=0,s; 
            
            while(j<i.second.size())
            {
                s=i.first;
                vector<int> c;
                while(s)
                {
                    c.push_back(i.second[j]);
                    s--,j++;
                }
                ans.push_back(c);
            }
        }
        return ans;
        
    }
};