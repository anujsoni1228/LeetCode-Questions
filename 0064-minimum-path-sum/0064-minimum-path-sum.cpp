class Solution {
public:
//     int helper(vector<vector<int>>& grid, int i, int j) {
//         if(grid.size()-1==i and grid[0].size()-1==j)
//             return grid[i][j];
        
//         int x=INT_MAX,y=INT_MAX;
//         if(j+1<grid[0].size())
//             y=helper(grid,i,j+1);
//         if(i+1<grid.size())
//             x=helper(grid,i+1,j);        
//         return grid[i][j]+min(x,y);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         return helper(grid,0,0);
//     }
 
    
//     int helper(vector<vector<int>>& grid, int i, int j,vector<vector<int>>& dp) {
//         if(grid.size()-1==i and grid[0].size()-1==j)
//             return dp[i][j]=grid[i][j];
        
//         if(dp[i][j]!=-1)
//             return dp[i][j];
        
//         int x=INT_MAX,y=INT_MAX;
//         if(j+1<grid[0].size())
//             y=helper(grid,i,j+1,dp);
//         if(i+1<grid.size())
//             x=helper(grid,i+1,j,dp);        
//         return dp[i][j]=grid[i][j]+min(x,y);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         vector<vector<int>> dp(grid.size(),vector<int>(grid[0].size(),-1));
//         return helper(grid,0,0,dp);
//     }
    
    
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