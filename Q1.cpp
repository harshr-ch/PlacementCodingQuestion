class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        if(n==0)
            return 0;
        for(;j<nums.size();j++)
        {
            if(nums[j]!=nums[j-1])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};