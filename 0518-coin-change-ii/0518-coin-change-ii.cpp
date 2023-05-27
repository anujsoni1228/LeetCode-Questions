class Solution {
public:
    int change(int a, vector<int>& c) 
    {
        vector<vector<int>> dp(c.size()+1, vector<int>(a+1));
        // for(int i=0;i<=a;i++)
        //     dp[0][i]=0;        
        for(int i=0;i<=c.size();i++)
            dp[i][0]=1;
        for(int i=1;i<=c.size();i++)
        {
            for(int j=1;j<=a;j++)
            {
                if(j-c[i-1]>=0)
                    dp[i][j]=dp[i][j-c[i-1]]+dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        return dp[c.size()][a];                  
    }
};