class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = 0, res = 0;
        if(nums.size() == 0) return 0;
    
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]) continue;
            if(nums[i+1] - nums[i] == 1) len++;
            else len = 0;
            res = max(len, res);
        }
        return res + 1;
    }
};