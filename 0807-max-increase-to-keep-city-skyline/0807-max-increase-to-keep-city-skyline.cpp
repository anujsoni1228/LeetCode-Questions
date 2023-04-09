class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& g) {
        int n=g.size(),ans=0;
        vector<int> r(n),c(n);
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                r[i]=max(r[i],g[i][j]),c[j]=max(c[j],g[i][j]);  
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                ans+=min(r[i],c[j])-g[i][j];
        return ans;
    }
};