class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string,greater<int>> s;
        for(int i=0;i<n.size();i++)
            s[h[i]]=n[i];
        n.resize(0);
        for(auto i:s)
            n.push_back(i.second);
        return n;           
    }
};