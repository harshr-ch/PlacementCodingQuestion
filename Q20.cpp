class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int> > v;
        int n=arr.size();
        for(auto it:arr)
        {
            int x=it;
            int count=0;
            while(it)
            {
                if(it%2!=0)
                    count++;
                it/=2;
            }
            v.push_back({count,x});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
            arr[i]=v[i].second;
        return arr;
    }
};