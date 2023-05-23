//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int cutRodDp(int price[], int n,vector<int> &dp) 
    {
        if(n==0)
            return 0;
            
        if(dp[n]!=-1)
            return dp[n];
            
        int ans=INT_MIN;
        for(int i=n;i>0;i--)
            ans=max(price[i-1]+cutRodDp(price,n-i,dp),ans);
        return dp[n]=ans;
    }
    int cutRod(int price[], int n) 
    {
        vector<int> dp(n+1,-1);
        return cutRodDp(price,n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends