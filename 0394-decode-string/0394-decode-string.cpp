class Solution {
public:
    // ¯\_( ͡❛ ͜ʖ ͡❛)_/¯
    //     |✪| 
    //     // \\
    //   MY OWN APPROACH 
    
    // if the upcoming character is alphabet [abcd..]
    // append to result (as it is)
    // if it is a number (may be single or multiple digit no. like 144)
    // store it in t = t*10 + no. (accumulating it)
    // if '[' comes then extract the whole part untill the 
    // corresponding ']' comes and then send this extracted part
    // again to decodeStrings(); [Recursion] and then paste it's decoded version's
    // copies t number of times to the result
    
    // firstly i used a stack but then i converted the stack into
    // a normal int variable
    
    string decodeString(string s) 
    {
        string res;
        int n=s.size(),t=0,j;
        int st=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a')
                res+=s[i];
            else if(s[i]<='9')
                t=t*10+s[i]-'0';
            else 
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