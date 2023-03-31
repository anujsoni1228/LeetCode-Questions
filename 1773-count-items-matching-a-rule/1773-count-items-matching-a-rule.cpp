class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rk, string rv) {
        int c=0,o;
        if(rk[0]=='t')
            o=0;
        else if(rk[0]=='c')
            o=1;
        else
            o=2;
        for(auto i:items)
            c+=i[o]==rv;
        return c;
    }
};