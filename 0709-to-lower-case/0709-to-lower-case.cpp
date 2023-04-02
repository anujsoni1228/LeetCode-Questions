class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
            s[i]=s[i]>=65 and s[i]<=90?s[i]+32:s[i];
        return s;
    }
};