//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
  int minimumDifference(vector<int>& arr) {
        int sum=0,ans=INT_MAX;
        for(int i=0;i<arr.size();i++)sum+=arr[i];
        vector<vector<bool>> dp(arr.size()+1,vector<bool>(sum+1));
        for(int i=0;i<=sum;i++)
            dp[0][i]=0;
        for(int i=0;i<=arr.size();i++)
            dp[i][0]=1;
        for(int i=1;i<=arr.size();i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(j-arr[i-1]>=0)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]] or dp[i-1][j];
                }
                else 
                dp[i][j]=dp[i-1][j];
            }
        }
        for(int i=0;i<=sum/2;i++)
            if(dp[arr.size()][i])
                ans=min(ans,sum-2*i);
        return ans;
        
    }
	int minDifference(int arr[], int n)  { 
	    vector<int> x(arr,arr+n);
	    return minimumDifference(x);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends