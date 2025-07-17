class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        bool rot = false;
        for (int i = 0; i < n - 1; i++){
            if(!rot){
                if(nums[i] > nums[i+1]){
                    rot = true;
                    if(nums[n-1] > nums[0]) return false;
                }
            }
            else {
                if(nums[i] > nums[i+1]) return false;
                if(nums[i+1] > nums[0]) return false;
                if(nums[i+1] == nums[0]) {
                    while(i< n -1){
                        if(nums[i+1] != nums[0]) return false;
                    }
                }
            }
        }

        return true;
    }
};