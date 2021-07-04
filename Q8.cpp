class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v =nums;
        vector<int> re;
        sort(v.begin(),v.end());
        map<int,int> mp;
        for(int i=0;i<v.size();i++)
        { 
            if(mp.find(v[i])==mp.end())
                mp[v[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            re.push_back(mp[nums[i]]);
        }
        return re;
    }
};