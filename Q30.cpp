class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        for(int i=0;i<n;i++)
        {
            int m1=INT_MIN;
            int m2=INT_MIN;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                    count++;
                m1=max(grid[i][j],m1);
                m2=max(grid[j][i],m2);
            }
            count+=m1+m2;
        }
        return count;
    }
};