class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> res;

        for(int i: nums){
            mpp[i]++;
        }

        for(auto [n, f]: mpp){
            if(f > nums.size()/3) res.push_back(n);
        }
        return res;
    }
};