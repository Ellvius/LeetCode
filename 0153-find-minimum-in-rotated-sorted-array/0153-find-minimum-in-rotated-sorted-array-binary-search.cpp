class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int mid = -1;
        while(low<high){
            mid = low + (high - low)/2;
            if(nums[high] < nums[mid]) low = mid + 1;
            else high = mid;
        }
        return nums[low];
    }
};