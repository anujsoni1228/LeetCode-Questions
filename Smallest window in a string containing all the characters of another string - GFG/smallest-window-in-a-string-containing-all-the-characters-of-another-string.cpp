//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    string minWindow(string s, string t) 
    {
        unordered_map<char,int> m;
        int c=0,i=0,j=0,n=s.size(),ans=INT_MAX,a,b;
        for(auto i:t)m[i]++;
        c=m.size();
        while(j<n)
        {
            if(m.find(s[j])!=m.end())
            {   
                m[s[j]]--;
                if(m[s[j]]==0)
                    c--;
            }
            while(c==0)
            {
                if(j-i+1<ans)
                    ans=j-i+1,a=i,b=j;
                if(m.find(s[i])!=m.end())
                {
                    m[s[i]]++;
                    if(m[s[i]]>0)
                        c++;    
                }
                i++;                    
            }
            j++;
        }
        if(ans!=INT_MAX)
            return s.substr(a,b-a+1);
        return "-1";
    }
    string smallestWindow (string s, string p)
    {
        return minWindow(s,p);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends