class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<long> prefixSum(n+1);
        int res = 0;

        prefixSum[0] = 0;
        for(int i = 1; i < n+1; i++){
            prefixSum[i] = nums[i-1] + prefixSum[i-1];
        }

        for(int i = 0; i < n; i++){
            int freq = bsearch(i, nums, k, prefixSum);
            res = max(freq, res);
        }
        
        return res;
    }

private:
    int bsearch(int target, vector<int>& nums, int k, vector<long>& prefixSum){
        int l = 0; 
        int r = target;
        int bestIndex = 0;

        while(l <= r){
            int mid = l + (r - l)/2;
            long originalSum = prefixSum[target+1] - prefixSum[mid];
            long cnt = (target - mid + 1);
            long calculatedSum = cnt * nums[target];
            long ops = calculatedSum - originalSum;

            if(ops > k){
                l = mid+1;
            }
            else {
                bestIndex = mid;
                r = mid - 1;
            }
        }

        return target - bestIndex + 1;
    }
};