class Solution {
public:
    
    bool ispos(int x,int y,int n,int m)
    {
        if(x>=0 && y>=0 && x<n && y<m)
            return true;
        return false;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int z=image[sr][sc];
        queue<pair<int,int> > q;
        q.push({sr,sc});
        int n=image.size(),m=image[0].size();
        vector<vector<int> > visited(n,vector<int>(m,0));
        while(!q.empty())
        {
            pair<int,int> p=q.front();
            q.pop();
            int x=p.first,y=p.second;
            image[x][y]=newColor;
            visited[x][y]=1;
            if(ispos(x-1,y,n,m) && visited[x-1][y]==0 && image[x-1][y]==z)
                q.push({x-1,y});
            if(ispos(x,y+1,n,m) && visited[x][y+1]==0 && image[x][y+1]==z)
                q.push({x,y+1});
            if(ispos(x+1,y,n,m) && visited[x+1][y]==0 && image[x+1][y]==z)
                q.push({x+1,y});
            if(ispos(x,y-1,n,m) && visited[x][y-1]==0 && image[x][y-1]==z)
                q.push({x,y-1});
        }
        return image;
    }
};