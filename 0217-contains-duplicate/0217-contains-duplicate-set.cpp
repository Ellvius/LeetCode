class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unique;

        for(int num: nums){
            if(unique.find(num) != unique.end()) return true;
            unique.insert(num);
        }
        return false;
    }
};