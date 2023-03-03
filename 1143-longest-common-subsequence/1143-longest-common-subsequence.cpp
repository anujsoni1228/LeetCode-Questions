class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int r=a.size(),c=b.size();
        vector<vector<int>> dp(r+1,vector<int> (c+1));
        for(int i=r-1;i>=0;i--)
        {
            for(int j=c-1;j>=0;j--)
            {
                if(a[i]==b[j])
                    dp[i][j]=1+dp[i+1][j+1];
                else
                    dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};