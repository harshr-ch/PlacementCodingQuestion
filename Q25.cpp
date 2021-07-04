class NumArray {
public:
    vector<int> v;
    NumArray(vector<int>& nums) {
        v=nums;
    }
    
    int sumRange(int i, int j) {
        int sum=0;
        for(int k=i;k<=j;k++)
        {
            sum+=v[k];
        }
        return sum;
    }
};