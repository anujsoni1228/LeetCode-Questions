class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int s=0,n=m.size();
        for(int i=0;i<n;i++)
        {
            s+=m[i][i]+m[i][n-i-1];
            if(i==n-i-1)
                s-=m[i][n-i-1];
        }
        return s;
    }
};



































