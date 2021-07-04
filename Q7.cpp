class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=sum+mp[nums[i]];
            mp[nums[i]]++;
        }
        return sum;
    }
};