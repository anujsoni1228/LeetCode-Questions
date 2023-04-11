class Solution {
public:
    // "God Ding "
    // "dog       
    string reverseWords(string s) {
        s+=' ';
        int i=0,j=0;
        while(j<s.size())
        {
            while(s[++j]!=' ');
            reverse(s.begin()+i,s.begin()+j);
            i=j+1;
            j++;
        }
        s.pop_back();
        return s;
    }
};