//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    // int knapSack(int w, int wt[], int val[], int n) 
    // { 
    //     if(n==0 or w==0)
    //         return 0;
        
    //     if(wt[n-1]<=w)
    //         return max(val[n-1]+knapSack(w-wt[n-1],wt,val,n-1),knapSack(w,wt,val,n-1));
    //     return knapSack(w,wt,val,n-1);
    // }
    
    int helper(int w, int wt[], int val[], int n,vector<vector<int>> &dp)
    {
        if(n==0 or w==0)
            return 0;
        if(dp[w][n]!=-1)
            return dp[w][n];
        if(wt[n-1]<=w)
            return dp[w][n]=max(val[n-1]+helper(w-wt[n-1],wt,val,n-1,dp),helper(w,wt,val,n-1,dp));
        return dp[w][n]=helper(w,wt,val,n-1,dp);
    }
    
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        vector<vector<int>> dp(w+1,vector<int> (n+1,-1));
        return helper(w,wt,val,n,dp);
    }
    
    // int knapSack(int w, int wt[], int val[], int n) 
    // { 
    //     vector<vector<int>> dp(w+1,vector<int> (n+1,0));
    //     for(int i=1;i<=w;i++)
    //     {
    //         for(int j=1;j<=n;j++)
    //         {
    //             if(wt[j-1]<=i)
    //                 dp[i][j]=max(val[j-1]+dp[i-wt[j-1]][j-1],dp[i][j-1]);
    //             else  
    //                 dp[i][j]=dp[i][j-1];
    //         }
    //     }
    //     return dp[w][n];
    // }
    
    
    
    
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends