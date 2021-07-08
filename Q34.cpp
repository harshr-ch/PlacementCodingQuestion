class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            int z=INT_MAX;
            int pos=-1;
            for(int j=0;j<m;j++)
            {
                if(z>matrix[i][j])
                {
                    z=matrix[i][j];
                    pos=j;
                }
            }
            int no=INT_MIN;
            for(int j=0;j<n;j++)
                if(no<matrix[j][pos])
                    no=matrix[j][pos];
            if(no==z)
                return {no};
        }
        return {};
    }
};