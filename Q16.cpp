class Solution {
public:
    
    void check(int pos,vector<int> &nums,int x,int &sum)
    {
        if(pos==nums.size())
        {
            sum+=x;
            return;
        }
        check(pos+1,nums,x,sum);
        check(pos+1,nums,x^nums[pos],sum);
    }
    
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
            check(i+1,nums,nums[i],sum);
        return sum;
    }
};