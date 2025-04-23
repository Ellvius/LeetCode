class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
        for(int num: nums){
            for(char c: to_string(num))
                digits.emplace_back(c - '0');
        }
        
        return digits;
    }
};