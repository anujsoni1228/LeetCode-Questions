class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(),s1.end());
        int a=s1.size();
        int b=s2.size();
        for(int i=0;i+a<=b;i++)
        {
            string x=s2.substr(i,a);
            sort(x.begin(),x.end());
            if(x==s1)
                return true;
        }
        return false;
        
    }
};