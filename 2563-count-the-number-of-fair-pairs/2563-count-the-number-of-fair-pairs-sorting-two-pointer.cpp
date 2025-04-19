class Solution {
    long long count(vector<int>& nums, long long lim){
        long long res = 0;
        for(int i = 0, j = nums.size() - 1; i < j; i++){
            while(i < j && nums[i] + nums[j] >lim) --j;
            res+= j - i;
        }
        return res;
    }
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        return count(nums, upper) - count(nums, lower - 1);
    }
};