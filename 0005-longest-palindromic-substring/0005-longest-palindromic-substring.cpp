class Solution {
public:
    bool check(string &s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]==s[j])
            { i++; j--; }
            else 
                return false;
        }
        return true;
    }
    string longestPalindrome(string s) 
    {
        pair <int,int> p;
        int n=s.length(),maxs=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>=i;j--)
            {
                if(s[i]==s[j])
                if(check(s,i+1,j-1))
                {
                    if(j-i+1>maxs)
                    {
                        maxs=j-i+1;
                        p.first=i;
                        p.second=j;
                    }
                }
            }
            if(n-i<maxs)
                break;
        }
        return s.substr(p.first,p.second-p.first+1);
    }
};






