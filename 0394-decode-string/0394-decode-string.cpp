class Solution {
public:
    string decodeString(string s) {
        string res;
        int n=s.size(),t=0,j;
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                res+=s[i];
            else if(s[i]>='0' and s[i]<='9')
                t=t*10+s[i]-'0';
            else if(s[i]=='[')
            {
                string cur;
                st.push('[');
                for(j=i+1;j<n;j++)
                {
                    if(s[j]=='[')
                        st.push('[');
                    else if(s[j]==']')
                        st.pop();
                    
                    if(st.empty())
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