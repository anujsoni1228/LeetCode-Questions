//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
// variable sized window Format lagaya he 
//   as learnt from aditya verma playlist
// + map use kiya he 
// agar kisi character ki frequency map se niche jati he 
// to usko hum map se erase kr denge
    int longestKSubstr(string s, int k) {
        int n=s.size(),i=0,j=0,ans=-1;
        unordered_map<char,int> st;
        while(j<n)
        {
            st[s[j]]++;
            if(st.size()<k)
                j++;
            else if(st.size()==k)
                ans=max(ans,j-i+1),j++;
            else 
            {
                while(st.size()>k)
                {
                    st[s[i]]--;
                    if(st[s[i]]==0)
                        st.erase(s[i]);
                    i++;
                }
                if(st.size()==k)
                    ans=max(ans,j-i+1),j++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends