class Solution {
public:
    
    bool isSubsequence(string s, string t) 
    {
        int m=s.size(),n=t.size();
        int i=0,j=0;
        while(i<m){
            while(j<n and t[j]!=s[i]){
                j++;
            }
            if(j==n)
                return 0;
            j++;i++;
        }
        return 1;
    }
};