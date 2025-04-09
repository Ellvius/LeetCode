class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> unique;

        for(int& num: nums){
            if(num < k) return -1;
        }

        for(int& num: nums){
            if(num > k)
                unique.insert(num);
        }

        return unique.size();
    }
};