class Solution {
public:
    string decodeMessage(string k, string s) {
        unordered_map<char,char> m;
        char c='a';
        m[' ']=' ';
        for(auto i:k)
            if(m.find(i)==m.end())m[i]=c,c++;
        for(int i=0;i<s.size();i++)
            if(s[i]!=' ')
                s[i]=m[s[i]];
        return s;
            
    }
};