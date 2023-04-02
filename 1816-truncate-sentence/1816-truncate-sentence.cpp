class Solution {
public:
    string truncateSentence(string s, int k) {
        int i=0;
        string ans;
        while(i<s.size())
        {
            ans+=s[i];
            if(s[i]==' ')
                k--;
            if(k==0)
                break;
            i++;
        }
        if(ans[ans.size()-1]==' ')
            ans.pop_back();
        return ans;
    }
};