class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++)
            m[s[i]]=i;
        int p=0,c=0;
        for(int i=0;i<s.size();i++)
        {
            if(m[s[i]]>p)
                p=m[s[i]];
            c++;
            if(i==p)
                ans.push_back(c),c=0;
        }
        return ans;
        
    }
};