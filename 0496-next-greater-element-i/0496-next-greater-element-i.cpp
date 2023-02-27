class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        stack<int> s;
        int n=b.size();
        vector<int> ans;
        unordered_map<int,int> m;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty() && s.top()<=b[i])
                s.pop();
            if(s.empty())
                m[b[i]]=-1,s.push(b[i]);
            else
                m[b[i]]=s.top(),s.push(b[i]);            
        }
        for(auto i:a)ans.push_back(m[i]);
        return ans;
    }  
    
};