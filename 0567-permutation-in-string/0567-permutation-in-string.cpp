class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int a=s1.size();
        int b=s2.size();
        int c1[26]={0};
        int c2[26]={0};
        if(a>b)
            return 0;
        for(auto i:s1)c1[i-'a']++;
        for(int i=0;i<a;i++)c2[s2[i]-'a']++;
        
        
        for(int i=0;i+a<=b;)
        {
            bool f=0;
            for(int j=0;j<26;j++)
            {
                if(c1[j]!=c2[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                return 1;
            c2[s2[i]-'a']--;
            if(s2[i+a]!='\0')
            c2[s2[i+a]-'a']++;
            i++;
        }
        return false;        
    }
};