class Solution {
public:
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        return a.first>b.first;
    }
    static bool c(pair<int,int> a,pair<int,int> b)
    {
        return a.second<=b.second;
    }
    
    vector<int> maxSubsequence(vector<int>& N, int k) 
    {        
        vector<pair<int,int>> d(N.size()),g;
        vector<int> ans;
        for(int i=0;i<N.size();i++)
            d[i].first=N[i],d[i].second=i;
        sort(d.begin(),d.end(),&comp);
        for(int i=0;i<k;i++)
            g.push_back(d[i]);
        sort(g.begin(),g.end(),&c);
        for(int i=0;i<k;i++)
            ans.push_back(g[i].first);
        return ans;
    }
};