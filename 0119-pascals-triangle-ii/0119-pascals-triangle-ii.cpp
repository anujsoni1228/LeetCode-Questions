class Solution {
public:
    // recursion + memoization with map wali dp [int --> vector<int>]
    unordered_map<int,vector<int>> dp;
    vector<int> getRow1(int i) {
        if(i==0)
            return dp[i]={1};
        if(i==1)
            return dp[i]={1,1};
        if(dp.find(i)!=dp.end())
            return dp[i];
        vector<int> ans(i+1);
        ans[i-0]=ans[0]=1;
        for(int j=1;j<=i/2;j++)
        {
            vector<int> pre=getRow(i-1);
            ans[i-j]=ans[j]=pre[j-1]+pre[j];
        }
        return dp[i]=ans;
    }
    
    
    // a very efficient solution also exists which uses propert of pascal triangle
    
  vector<int> getRow(int rowIndex) {
        vector<int> A(rowIndex+1, 0);
        A[0] = 1;
        for(int i=1; i<rowIndex+1; i++)
            for(int j=i; j>=1; j--)
                A[j] += A[j-1];
        return A;
    }
};