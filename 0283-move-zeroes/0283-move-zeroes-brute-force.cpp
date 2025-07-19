class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;

        for(int num: nums){
            if(num != 0) temp.push_back(num);
        }

        for(int i = 0; i < temp.size(); i++){
            nums[i] = temp[i];
        }

        for(int i = temp.size(); i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};