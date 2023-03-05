class Solution {
public:
    struct node
    {
        int min;
        int i;
        int j;
    };
    
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int m=grid.size(),n=grid[0].size(),res=0,f=0;
        queue<node> q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2)
                {
                    node x;
                    x.min=0;
                    x.i=i;
                    x.j=j;
                    q.push(x);
                }
                else if(grid[i][j]==1)
                    f++;
            }
        }
        while(!q.empty())
        {
            node x=q.front();
            q.pop();
            if(x.i+1<m and grid[x.i+1][x.j]==1)
            {
                grid[x.i+1][x.j]=2;
                f--;
                node t;
                t.min=x.min+1;
                t.i=x.i+1;
                t.j=x.j;
                q.push(t);
            }
            if(x.j+1<n and grid[x.i][x.j+1]==1)
            {
                grid[x.i][x.j+1]=2;
                f--;
                node t;
                t.min=x.min+1;
                t.i=x.i;
                t.j=x.j+1;
                q.push(t);
            }
            if(x.i-1>=0 and grid[x.i-1][x.j]==1)
            {
                grid[x.i-1][x.j]=2;
                f--;
                node t;
                t.min=x.min+1;
                t.i=x.i-1;
                t.j=x.j;
                q.push(t);
            }
            if(x.j-1>=0 and grid[x.i][x.j-1]==1)
            {
                grid[x.i][x.j-1]=2;
                f--;
                node t;
                t.min=x.min+1;
                t.i=x.i;
                t.j=x.j-1;
                q.push(t);
            }
            res=max(x.min,res);
        }
        if(f==0)
            return res;
        else return -1;
    }
};