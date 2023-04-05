class Solution {
public:
    int countConsistentStrings(string a, vector<string>& w){
        int ans=w.size(); 
        unordered_set<char> s(a.begin(),a.end());
        for(auto i:w)
            for(auto j:i)
                if(s.find(j)==s.end())
                   { ans--;break;}
        return ans;
    }
};