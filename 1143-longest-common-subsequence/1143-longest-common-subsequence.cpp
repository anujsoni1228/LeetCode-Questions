class Solution {
public:
    int longestCommonSubsequence(string a, string b) 
    {
        int r=a.size(),c=b.size();
        int dp[r+1][c+1];
        
        // filling 0's to last row and last coloumn
        for(int i=0;i<=r;i++)dp[i][c]=0;
        for(int i=0;i<=c;i++)dp[r][i]=0;
        
        // if both characters match then go 1+
        //                                     ↘   {diagonally right-bottom}
        // if not then take max( ,⇒)  {adjacent right & bottom}
        //                      ⇓
        
        // BOTTOM UP [DP] 
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

