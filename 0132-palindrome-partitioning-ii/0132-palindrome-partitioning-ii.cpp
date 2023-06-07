class Solution {
public:
/* 
    Instead of writing below standard line
    We will recurse for only right part
    Only when left part turns out to be palindrome

    Reason : If left substring becomes palindrome then there is no need to partition it further 
    (which in turn reduces the number of recursive calls)

    int temp =  solve (s, i, k, dp, palindrome) + solve (s, k+1, j, dp, palindrome) + 1;

*/
            
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
                int r;
                if(dp[k]!=-1)
                    r=dp[k];
                else
                    r=dp[k]=solve(s,k,j,dp);
                ans=min(ans,1+r);
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