class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = 0;
        long currSum = 0;
        int l = 0;

        for(int r = 0; r < n; r++){
            long target = nums[r];
            currSum += target;

            if((r - l + 1) * target - currSum > k){
                currSum -= nums[l];
                l++;
            }

            res = max(res, r - l + 1);
        }
        
        
        return res;
    }

};