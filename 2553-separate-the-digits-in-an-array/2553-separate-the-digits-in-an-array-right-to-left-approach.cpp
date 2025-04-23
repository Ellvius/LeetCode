class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
        for(int num: nums){
            int div = 1;

            while(num/div >= 10)
                div *= 10;

            while(div > 0){
                digits.emplace_back(num / div);
                num %= div;
                div /= 10;
            }
        }
        
        return digits;
    }
};