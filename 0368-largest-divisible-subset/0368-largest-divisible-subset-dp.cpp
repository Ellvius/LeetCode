class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<int> largestLength(n, 1);           
        vector<int> previous(n, -1);        
        int maxIndex = 0;               

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && largestLength[j] + 1 > largestLength[i]) {
                    largestLength[i] = largestLength[j] + 1;
                    previous[i] = j;
                }
            }
            if (largestLength[i] > largestLength[maxIndex]) {
                maxIndex = i;
            }
        }

        vector<int> result;
        while (maxIndex != -1) {
            result.push_back(nums[maxIndex]);
            maxIndex = previous[maxIndex];
        }

        return result;
    }
};
