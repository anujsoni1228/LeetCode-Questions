class Solution {
public:
    int numJewelsInStones(string j, string s) {
        int c=0;
        unordered_set<char> st(j.begin(),j.end());
        for(auto i:s)c+=st.find(i)!=st.end();
        return c;
    }
};