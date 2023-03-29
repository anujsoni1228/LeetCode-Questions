class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans=INT_MIN;
        for(int i=0;i<s.size();i++)
        {
            int c=0;
            for(int j=0;j<s[i].size();j++)
                c+=(s[i][j]==' ');
            ans=max(c,ans);
        }
        return ans+1;
    }
};