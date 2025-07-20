class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1, cnt = 0, sm = INT_MIN;

        for(int i=0; i < nums.size(); i++){
            if(nums[i] == sm + 1){
                cnt++;
                sm = nums[i];
                longest = max(longest, cnt);
            }
            else if(nums[i] == sm){
                continue;
            }
            else {
                sm = nums[i];
                cnt = 1;
            }
        }
        return longest;
    }
};