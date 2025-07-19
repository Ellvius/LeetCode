class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for(int num: nums){
            mpp[num]++;
        }
        for(auto& [n, f]: mpp){
            if(f == 1) return n;
        }
        return -1;
    }
};