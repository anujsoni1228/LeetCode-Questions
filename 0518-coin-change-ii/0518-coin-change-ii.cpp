class Solution {
public:   
//     int helper(int a, vector<int>& c, int n, vector<vector<int>>& dp) 
//     {
//         if (a == 0)
//             return 1;
//         if (n == c.size() || a < 0)
//             return 0;

//         if (dp[a][n] != -1)
//             return dp[a][n];

//         long int ans = 0;
//         int x = 0;
//         for (int i = n; i < c.size(); i++)
//         {
//             if (a - c[i] >= 0) 
//             {
//                 dp[a - c[i]][n + x] = helper(a - c[i], c, n + x, dp);
//                 ans += dp[a - c[i]][n + x];
//                 x++;
//             }
//         }
//         return dp[a][n] = ans;
//     }

//     int change(int a, vector<int>& c) 
//     {
//         vector<vector<int>> dp(a + 1, vector<int>(c.size(), -1));
//         return helper(a, c, 0, dp);
//     }
    
    int change(int a, vector<int>& c) 
    {
        vector<vector<int>> dp(c.size()+1, vector<int>(a+1));
        for(int i=0;i<=a;i++)
            dp[0][i]=0;        
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