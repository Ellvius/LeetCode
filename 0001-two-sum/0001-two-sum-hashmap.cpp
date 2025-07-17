class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        unordered_map<int, int> mpp(n);

        for(int i = 0; i < n; i++){
            int t = target - nums[i];
            if(mpp.find(t) != mpp.end()){;
                res.push_back(i);
                res.push_back(mpp[t]);
            }
            mpp[nums[i]] = i;
        }

        return res;
    }
};