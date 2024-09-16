class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxbit = *max_element(nums.begin(), nums.end());
        int ans = 1;
        int count = 0;
        int i = 0;
        while(i<nums.size()){
            if(nums[i] == maxbit){
                while(i<nums.size() && nums[i++] == maxbit) count++;
                ans = max(ans, count);
                count = 0;
            }
            else i++;
        }
        return ans;
    }
};