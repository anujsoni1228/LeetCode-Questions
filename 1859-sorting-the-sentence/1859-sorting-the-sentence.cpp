class Solution {
public:
    string sortSentence(string s) {
        vector<string> x(9);
        string ans;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<='9')
                x[s[i]-'0'-1]=s.substr(c,i-c),c=i+2,i++;
        }
        for(auto i:x)if(i!="")ans+=i+' ';
        ans.pop_back();
        return ans;
    }
};