class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int pre = 1, suf = 1;

        for(int i = 0; i < n; i++){
            pre *= nums[i];
            suf *= nums[n-i-1];
            maxi = max({pre, maxi, suf});

            if(pre == 0) pre = 1;
            if(suf == 0) suf = 1;
        }


        return maxi;
    }
};