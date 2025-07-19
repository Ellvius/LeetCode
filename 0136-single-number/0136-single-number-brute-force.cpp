class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int cnt = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]) cnt++;
            }
            if(cnt == 1) return nums[i];
        }
        return -1;
    }
};