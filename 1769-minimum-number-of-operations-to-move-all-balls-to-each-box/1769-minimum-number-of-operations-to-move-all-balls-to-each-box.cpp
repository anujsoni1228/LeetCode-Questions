class Solution {
public:
    vector<int> minOperations(string b) {
        vector<int> ans,res;
        for(auto i=0;i<b.size();i++)
            if(b[i]=='1')
                ans.push_back(i);
        for(auto i=0;i<b.size();i++)
        {
            int s=0;
            for(auto j=0;j<ans.size();j++)
                s+=abs(i-ans[j]);
            res.push_back(s);
        }
        return res;    
                
    }
};