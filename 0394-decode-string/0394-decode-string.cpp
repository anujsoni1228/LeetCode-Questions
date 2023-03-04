class Solution {
public:
    string decodeString(string s) {
        string res;
        int n=s.size(),t=0,j;
        int st=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                res+=s[i];
            else if(s[i]>='0' and s[i]<='9')
                t=t*10+s[i]-'0';
            else if(s[i]=='[')
            {
                string cur;
                st++;
                for(j=i+1;j<n;j++)
                {
                    if(s[j]=='[')
                        st++;
                    else if(s[j]==']')
                        st--;
                    
                    if(!st)
                        break;
                    
                    cur+=s[j];
                }
                string x=decodeString(cur);
                while(t--)
                    res+=x;       
                i=j;
                t=0;
            }            
        }
        return res;
    }
};