class Solution {
public:
    vector<int> findA4nagrams(string s, string p) 
    {
        int m=s.size();
        int n=p.size();
        int h[26]={0};
        int ph[26]={0};
        vector<int> ans;
        for(int i=0;i<n;i++)
            ph[p[i]-'a']++,h[s[i]-'a']++;
        
        for(int i=0;i+n-1<m;)
        {
            bool f=0;
            for(int j=0;j<26;j++)
                if(ph[j]!=h[j])
                    {f=1;break;}
            if(!f)
                ans.push_back(i);
            h[s[i]-'a']--;
            i++;
            h[s[i+n-1]-'a']++;            
        }
        return ans;
    }
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.length();
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int> freq_p(26,0);
        vector<int> window(26,0);
        
        //first window
        for(int i=0;i<p_len;i++){
            freq_p[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        
        vector<int> ans;
        if(freq_p == window) ans.push_back(0);
        
        for(int i=p_len;i<s_len;i++){
            window[s[i-p_len] - 'a']--;
            window[s[i] - 'a']++;
            
            if(freq_p == window) ans.push_back(i-p_len+1);
        }
        return ans;
    }
};