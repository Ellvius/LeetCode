class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxVal = INT_MIN;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            maxVal = max(sum, maxVal);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxVal;
    }
};