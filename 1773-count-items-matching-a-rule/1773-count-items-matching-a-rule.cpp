class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rk, string rv) {
        int c=0,o;
        o=rk[0]=='t'?0:rk[0]=='c'?1:2;
        for(auto i:items)c+=i[o]==rv;
        return c;
    }
};