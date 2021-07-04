class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int> mp;
        for(auto it: nums1)
        {
            if(mp[it]==0)
                mp[it]++;
        }
        for(auto it: nums2)
        {
            if(mp[it]>0)
                {v.push_back(it);
                mp[it]--;}
        }
        return v;
    }
};