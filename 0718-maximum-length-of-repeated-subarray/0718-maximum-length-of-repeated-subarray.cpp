class Solution {
public:
    int lcs(int x, int y, vector<int>& s1, vector<int>& s2)
    {
        vector<vector<int>> dp(x+1,vector<int>(y+1,0));
        int ans=0;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=0;
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
    int findLength(vector<int>& S1, vector<int>& S2) {
        return lcs(S1.size(),S2.size(),S1,S2);
    }
};