class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,c=0;
        for(auto i:s)
            i=='L'?l++:l--,c+=l==0;
        return c;
    }
};