class Solution {
public:
    // plain recursion
    int helper1(vector<vector<int>>& grid, int i, int j) {
        if(grid.size()-1==i and grid[0].size()-1==j)
            return grid[i][j];
        
        int x=INT_MAX,y=INT_MAX;
        if(j+1<grid[0].size())
            y=helper1(grid,i,j+1);
        if(i+1<grid.size())
            x=helper1(grid,i+1,j);        
        return grid[i][j]+min(x,y);
    }
    int minPathSum1(vector<vector<int>>& grid) {
        return helper1(grid,0,0);
    }
 
    
    // recursion with 2D dp[][]
    int helper2(vector<vector<int>>& grid, int i, int j,vector<vector<int>>& dp) {
        if(grid.size()-1==i and grid[0].size()-1==j)
            return dp[i][j]=grid[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int x=INT_MAX,y=INT_MAX;
        if(j+1<grid[0].size())
            y=helper2(grid,i,j+1,dp);
        if(i+1<grid.size())
            x=helper2(grid,i+1,j,dp);        
        return dp[i][j]=grid[i][j]+min(x,y);
    }
    int minPathSum2(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
        return helper2(grid,0,0,dp);
    }
    
    
    // tabulation 
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n));
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(i==m-1 && j==n-1)
                {   dp[i][j]=grid[i][j];    continue;   }
                
                int x=INT_MAX,y=INT_MAX;
                if(i+1<m)
                    x=dp[i+1][j];
                if(j+1<n)
                    y=dp[i][j+1];
                dp[i][j]=grid[i][j]+min(x,y);                    
            }
        }
        return dp[0][0];
    }
    
    
};