class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,c=0;
        for(auto i:s)
            i=='L'?l++:r++,c+=l==r;
        return c;
    }
};