class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> v;
        int z=0;
        int n=mat.size();
        int m=mat[0].size();
        vector<int> visited(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!visited[j] && mat[j][i]==0)
                {
                    v.push_back(j);
                    visited[j]=1;
                    z++;
                }
                if(z==k)
                {
                    if(v.empty())
                        v.push_back(0);
                    return v;
                }
            }
        }
        for(int i=0;i<visited.size();i++)
        {
            if(!visited[i])
            {
                v.push_back(i);
                z++;
            }
            if(z==k)
                return v;
        }
        if(v.empty())
            v.push_back(0);
        return v;
    }
};