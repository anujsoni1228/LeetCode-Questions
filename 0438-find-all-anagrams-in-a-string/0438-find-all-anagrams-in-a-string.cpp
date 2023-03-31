class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        int i=0,j=0;
        unordered_map<int,int> m;
        vector<int> ans;
        for(auto i:p)
            m[i]++;
        int count=m.size();
        int k=p.size();
        while(j<s.size())
        {
            m[s[j]]--;
            if(m[s[j]]==0)
                count--;
            if(j-i+1==k)
            {
                if(count==0) 
                    ans.push_back(i);
                m[s[i]]++;
                if(m[s[i]]==1)
                    count++;
                i++,j++;
            }
            else
                j++;
        }
        return ans;
    }
};