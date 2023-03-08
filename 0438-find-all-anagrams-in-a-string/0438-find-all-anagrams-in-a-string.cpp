class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        // calculate the lengths of each string
        int m=s.size();
        int n=p.size();

        // if p's length is more than s (do nothing)
        if(n>m)
            return {};

        // build two hash sets 
        // 1. for p (contain frequencies of each character in p) 
        // 2. for s (contain frequencies of each character in current window)
        int h[26]={0};
        int ph[26]={0};
        
        // for ans
        vector<int> ans;

        //count the frequencies of first match
        // e.g. - "abc" and "cba"-"ebabacd" have been counted
        for(int i=0;i<n;i++)
            ph[p[i]-'a']++,h[s[i]-'a']++;
        
        // sliding window approach
        for(int i=0;i+n-1<m;)
        {
            bool f=0;
            // chck for beinig anagram (by comparing frequencies of char)
            // if atleast a single value doest match then its not our ans
            for(int j=0;j<26;j++)
                if(ph[j]!=h[j])
                    {f=1;break;}

            // if it's ans then store it
            if(!f)
                ans.push_back(i);

            // decrease the frequencies of char removed from window
            h[s[i]-'a']--;
            // i++ means slide the window to right
            i++;
            // (edge case handle + increase the count 
            // of char being included to window)
            if(s[i+n-1]!='\0')
            h[s[i+n-1]-'a']++;            
        }
        return ans;
    }

};