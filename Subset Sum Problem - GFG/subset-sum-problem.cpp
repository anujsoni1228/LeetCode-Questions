//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
//     bool isSubsetSum(vector<int> arr, int sum) {
//     vector<vector<bool>> dp(arr.size() + 1, vector<bool>(sum + 1));

//     for (int i = 0; i <= sum; i++)
//         dp[0][i] = false;

//     for (int i = 0; i < arr.size(); i++)
//         dp[i][0] = true;

//     for (int i = 1; i <= arr.size(); i++) {
//         for (int j = 1; j <= sum; j++) {
//             if (j - arr[i - 1] >= 0) {
//                 dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
//             } else {
//                 dp[i][j] = dp[i - 1][j];
//             }
//         }
//     }

//     return dp[arr.size()][sum];
// }

    bool isSubsetSum(vector<int> arr, int sum){
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
        return dp[arr.size()][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends