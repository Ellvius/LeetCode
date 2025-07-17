class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int t = target - nums[i];
            if(mpp.find(t) != mpp.end()){;
                return {i , mpp[t]};
            }
            mpp[nums[i]] = i;
        }

        return {-1, -1};
    }
};