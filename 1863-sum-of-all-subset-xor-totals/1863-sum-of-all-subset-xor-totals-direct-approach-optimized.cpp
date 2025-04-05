class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        return findXorSum(nums, 0, 0);
    }

private:
    int findXorSum(vector<int>& nums, int i, int xorSum){
        if(i == nums.size()){
            return xorSum;
        }

        int inc = findXorSum(nums, i + 1, nums[i]^xorSum);
        int exc = findXorSum(nums, i + 1, xorSum);

        return inc + exc;
    }
};