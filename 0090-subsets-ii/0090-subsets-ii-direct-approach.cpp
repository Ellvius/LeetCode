class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> pow;

        vector<vector<int>> res;
        vector<int> currentSet;
        sort(nums.begin(), nums.end());  // Needed to handle duplicates correctly
        findSubset(nums, 0, currentSet, res, pow);

        return res;
    }

private:
    void findSubset(vector<int>& nums, int i, vector<int>& cur, vector<vector<int>>& res, set<vector<int>>& pow){
        if(i == nums.size()){
            if(pow.insert(cur).second){
                res.push_back(cur);
            }
            return;
        }

        cur.push_back(nums[i]);
        findSubset(nums, i + 1, cur, res, pow);
        cur.pop_back();
        findSubset(nums, i + 1, cur, res, pow);
    }
};
