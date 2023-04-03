class SubrectangleQueries {
public:
    vector<vector<int>> r;
    SubrectangleQueries(vector<vector<int>>& re) {
        r=re;
    }
    
    void updateSubrectangle(int r1, int c1, int r2, int c2, int n) {
        for(int i=r1;i<=r2;i++)
            for(int j=c1;j<=c2;j++)
                r[i][j]=n;
    }
    
    int getValue(int i, int j) {
        return r[i][j];
    }
};