class Solution {
public:
    // "*||*|||||*|*|***||*||***|"
    int countAsterisks(string s) {
        int c=0,ans=s[0]=='*';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
                c++;
            if(c%2==0)
            {
                i++;
                while(i<s.size() and s[i]!='|')
                    ans+=s[i]=='*',i++;
                i--;
            }
        }
        return ans;
    }
};