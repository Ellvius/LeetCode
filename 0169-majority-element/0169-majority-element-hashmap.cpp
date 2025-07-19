class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;

        for(int i: nums){
            freq[i]++;
        }

        for(auto [n, f]: freq){
            if(f > nums.size()/2) return n;
        }
        return -1;
    }
};