class Solution {
public:
    bool isPal(string &s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j]) 
                return false;
            i++; j--;
        }
        return true;
    }
    int solve(string s,int i,int j, vector<int> &dp)
    {
        if(dp[i]!=-1)
            return dp[i];
        
        if(isPal(s,i,j))
            return dp[i]=0;       
                
        int ans=INT_MAX;
        for(int k=i+1;k<=j;k++)
        {
            if(isPal(s,i,k-1))
            {
                ans=min(ans,1+solve(s,k,j,dp));
            }
        }
        return dp[i]=ans;
    }
    int minCut(string s) 
    {
        int N=s.size();
        vector<int> dp(N,-1);
        return solve(s,0,N-1,dp);
    }
};