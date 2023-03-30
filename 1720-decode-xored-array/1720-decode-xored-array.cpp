class Solution {
public:
    vector<int> decode(vector<int>& e, int f) {
        int n=e.size();
        vector<int> ans(n+1);
        ans[0]=f;
        for(int i=1;i<=n;i++)
            ans[i]=ans[i-1]^e[i-1];
        return ans;
    }
};