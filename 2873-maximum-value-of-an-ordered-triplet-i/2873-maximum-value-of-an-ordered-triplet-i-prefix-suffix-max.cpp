class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> maxRight(n,0);

        maxRight[n-1] = nums[n-1];
        for(int k = n - 2; k >= 0; k--){
            maxRight[k] = max(maxRight[k+1], nums[k]);
        }
        
        long long ans = 0;
        int maxLeft = nums[0];

        for(int j = 1; j < n - 1; j++){
            if(maxLeft > nums[j]){
                long long val = static_cast<long long>(maxLeft - nums[j]) * maxRight[j + 1];
                ans = max(ans, val);
            }
            maxLeft = max(maxLeft, nums[j]);
        }
        
        return ans;
    }
};