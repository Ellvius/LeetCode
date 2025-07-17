class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> set(nums.begin(), nums.end());

        int size = 0;
        for(auto& i: set){
            nums[size] = i;
            size++;
        }
        return size;
    }
};