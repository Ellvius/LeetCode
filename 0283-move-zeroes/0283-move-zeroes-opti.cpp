class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zidx = -1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) {
                zidx = i;
                break;
            }
        }

        if(zidx != -1){
            for(int i = zidx + 1; i < nums.size(); i++) {
                if(nums[i] != 0) {
                    swap(nums[i], nums[zidx]);
                    zidx++;
                }
            }
        }
    }
};