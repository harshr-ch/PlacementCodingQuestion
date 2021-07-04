class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> v;
        if((mat.size()*mat[0].size())!=(r*c))
            return mat;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        vector<vector<int> > re(r,vector<int>(c,0));
        int x=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                re[i][j]=v[x];
                if(x==v.size())
                    break;
                x++;
            }
        }
        return re;
    }
};