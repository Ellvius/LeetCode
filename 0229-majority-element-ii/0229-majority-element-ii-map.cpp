class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> res;
        int n = nums.size() / 3 + 1;

        for(int i: nums){
            mpp[i]++;
            if(mpp[i] == n) res.push_back(i);
        }

        return res;
    }
};