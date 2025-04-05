class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> currSet;
        generateSubset(nums, 0, currSet, res);
        return res;
    }

private:
    void generateSubset(vector<int>& nums, int i, vector<int>& currSet, vector<vector<int>>& res){
        if(i == nums.size()){
            res.push_back(currSet);
            return;
        }

        currSet.push_back(nums[i]);
        generateSubset(nums, i + 1, currSet, res);
        currSet.pop_back();
        generateSubset(nums, i + 1, currSet, res);
    }

};