class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        int unique = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]!=unique){
                nums[j] = nums[i];
                unique = nums[i];
                j++;
            }
        }
        return j;
    }
};