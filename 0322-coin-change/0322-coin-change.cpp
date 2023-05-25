class Solution {
public:
    int coinChange(vector<int>& c, int a) 
    {
        vector<int> dp(a+1);
        dp[0]=0;
        for(int j=1;j<=a;j++)
        {
            dp[j]=INT_MAX;
            for(int i=0;i<c.size();i++)
                if(j-c[i]>=0 and dp[j-c[i]]!=-1)
                    dp[j]=min(dp[j],1+dp[j-c[i]]);
            if(dp[j]==INT_MAX)
                dp[j]=-1;
        }
        return dp[a];      
    }
};