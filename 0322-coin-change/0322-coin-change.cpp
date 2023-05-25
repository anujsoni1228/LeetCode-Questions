class Solution {
public:
    int coinChange(vector<int>& c, int a) 
    {
        vector<int> dp(a+1,a+1);
        dp[0]=0;
        for(int j=1;j<=a;j++)
        {
            for(int i=0;i<c.size();i++)
                if(j-c[i]>=0)
                    dp[j]=min(dp[j],1+dp[j-c[i]]);
        }
        return dp[a]>a?-1:dp[a];      
    }
};