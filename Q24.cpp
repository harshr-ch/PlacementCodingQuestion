class Solution {
public:
    
    bool point(int x,int y,int m,int n)
    {
        return x>=0 && x<m && y>=0 && y<n;
    }
    
    int check(vector<vector<int>>& grid,int i,int j)
    {
        int sum=4;
        int dx[]={0,0,-1,1};
        int dy[]={-1,1,0,0};
        for(int z=0;z<4;z++)
        {
            int x=i+dx[z];
            int y=j+dy[z];
            if(point(x,y,grid.size(),grid[0].size()) && grid[x][y]==1)
                sum--;
        }
        return sum;
    }
        
    int islandPerimeter(vector<vector<int>>& grid) {
        int sum=0;
        if(grid.size()==1 && grid[0].size()==1 && grid[0][0]==1)
            return 4;
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[i].size();j++)
                if(grid[i][j]==1)
                    sum=sum+check(grid,i,j);
        return sum;
    }
};