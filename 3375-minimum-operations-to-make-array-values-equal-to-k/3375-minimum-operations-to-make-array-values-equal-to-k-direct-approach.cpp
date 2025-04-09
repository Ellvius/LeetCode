class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        if(k > nums[0]) return -1;

        int res = 0;
        if(k < nums[0]) res++;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i]!=nums[i+1]) res++;
        }

        return res;
    }
};