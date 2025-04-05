class Solution {
    void findSubset(vector<int>& nums, int i, vector<int>& cur, vector<vector<int>>& subsets){
        if(i == nums.size()){
            subsets.push_back(cur);
            return;
        }

        cur.push_back(nums[i]);
        findSubset(nums, i + 1, cur, subsets);
        cur.pop_back();
        findSubset(nums, i + 1, cur, subsets);
    }

public:
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> subsets;

        vector<int> currentSubset;
        findSubset(nums, 0, currentSubset, subsets);

        int res = 0;
        for(vector<int>& subset : subsets){
            int xorSum = 0;
            for(int& num : subset){
                xorSum^=num;
            }
            res+=xorSum;
        }
        
        return res;
    }
};