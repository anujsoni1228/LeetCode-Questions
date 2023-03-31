class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rk, string rv) {
        int c=0;
        for(auto i:items)
        {
            if(rk=="type")
                c+=i[0]==rv;
            else if(rk=="color")
                c+=i[1]==rv;
            else
                c+=i[2]==rv;
        }
        return c;
    }
};