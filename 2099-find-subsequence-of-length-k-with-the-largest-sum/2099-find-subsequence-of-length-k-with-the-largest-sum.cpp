class Solution {
public:
//     ek vector of pair banao har index per do chize store kro 
//     ek value or dusra ki vo kahan per rkha tha (Index), 
//     then sort the array according to its value in decreasing order
//     and then take out first k greatest elements and then sort 
//     them again based on their positions (index values in the)
//     original array 
     
    // sort acording to first value
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        return a.first>b.first;
    }
    // sort according to second value
    static bool c(pair<int,int> a,pair<int,int> b)
    {
        return a.second<=b.second;
    }
    
    vector<int> maxSubsequence(vector<int>& N, int k) 
    {   
        // create a vector of pair and ans vector
        vector<pair<int,int>> d(N.size()),g;
        vector<int> ans;
        // store value and index together
        for(int i=0;i<N.size();i++)
            d[i].first=N[i],d[i].second=i;
        
        // sort according to value in dec. order
        sort(d.begin(),d.end(),&comp);
        
        // take first k elements
        for(int i=0;i<k;i++)
            g.push_back(d[i]);
        
        // sort first k elements according to index in the original array
        sort(g.begin(),g.end(),&c);
        
        // take them into answer
        for(int i=0;i<k;i++)
            ans.push_back(g[i].first);
        
        return ans;
    }
};


