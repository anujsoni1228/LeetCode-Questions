class Solution {
public:
// sliding window toughest question
// agar ye krliya to sab krlega tu 
// by aditya verma (paaylist lats question)
    
    
// Make a frequency map of t
// First store the frequency of every character of t string.
// Then loop over the string and decrement the frequency from the map
// When count variable equals to zero then start minimizing the window.
    
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
        return "";
    }
    
// HINTS
// Use two pointers to create a window of letters in s, which would have all the characters from t.
// Expand the right pointer until all the characters of t are covered.
// Once all the characters are covered, move the left pointer and ensure that all the characters are still covered to minimize the subarray size.
// Continue expanding the right and left pointers until you reach the end of s.
};