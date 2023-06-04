//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int>> dp(x+1,vector<int>(y+1,0));
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                // The condition "s1[i-1]==s2[j-1] and i!=j" checks 
                // if the characters at indices i-1 and j-1 are equal
                // but also ensures that the indices i and j are not 
                // the same. This condition ensures that the common 
                // subsequence being considered is a repeating subsequence,
                // as it excludes cases where the same character is being 
                // used twice consecutively.
                if(s1[i-1]==s2[j-1] and i!=j)
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[x][y];
    }
	
	int LongestRepeatingSubsequence(string a){
	    return lcs(a.size(),a.size(),a,a);
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends