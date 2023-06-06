//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int solve(int arr[],int i,int j,vector<vector<int>> &dp)
    {
        if(i==j-1)
            return dp[i][j]=0;
        if(i==j-2)
            return dp[i][j]=arr[i]*arr[i+1]*arr[j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=INT_MAX;
        for(int k=i+1;k<j;k++)
        {
            ans=min(ans,solve(arr,i,k,dp)+solve(arr,k,j,dp)+arr[i]*arr[k]*arr[j]);
        }
        return dp[i][j]=ans;
    }
    
    int matrixMultiplication(int N, int arr[])
    {
        vector<vector<int>> dp(N+1,vector<int>(N+1,-1));
        return solve(arr,0,N-1,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends