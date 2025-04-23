class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
        stack<int> digitStack;

        for(int num: nums){
            while(num != 0){
                digitStack.push(num % 10);
                num/=10;
            }
            while(!digitStack.empty()){
                digits.emplace_back(digitStack.top());
                digitStack.pop();
            }
        }
        
        return digits;
    }
};