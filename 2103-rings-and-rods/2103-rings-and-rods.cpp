class Solution {
public:
    int countPoints(string r) 
    {
        int ans=0;
        unordered_set<char> m[10];
        for(int i=0;i+1<r.size();i+=2)
            m[r[i+1]-'0'].insert(r[i]);
        for(auto i:m)
            ans+=i.size()==3;
        return ans;
    }
};