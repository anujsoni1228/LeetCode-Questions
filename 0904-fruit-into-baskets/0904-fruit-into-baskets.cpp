class Solution {
public:
    int totalFruit(vector<int>& f) {
        int i=0,j=0,n=f.size(),ans=0;
        unordered_map<int,int> s;
        while(j<n)
        {
            s[f[j]]++;
            if(s.size()==2)
                ans=max(ans,j-i+1);
            else if(s.size()>2)
            {
                s[f[i]]--;
                if(s[f[i]]==0)
                    s.erase(f[i]);
                i++;
            }
            j++;
        }
        if(ans==0)
            return f.size();
        return ans;
    }
};