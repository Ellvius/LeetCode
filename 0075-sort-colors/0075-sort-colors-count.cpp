class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] = {0};
        for(int num: nums){
            arr[num]++;
        }
        int i;
        for( i = 0; i < arr[0] ; i++){
            nums[i] = 0;
        }

        for( ; i < arr[0]+arr[1] ; i++){
            nums[i] = 1;
        }
        for( ; i < nums.size() ; i++){
            nums[i] = 2;
        }
    }
};