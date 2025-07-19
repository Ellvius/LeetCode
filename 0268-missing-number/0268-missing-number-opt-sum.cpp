class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = n * (n+1)/2;

        int arrSum = 0;
        for(int i: nums){
            arrSum+=i;
        }

        return sum - arrSum;
    }
};