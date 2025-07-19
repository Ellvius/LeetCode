class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int n: nums)
            xor1^=n;
        return xor1;
    }
};