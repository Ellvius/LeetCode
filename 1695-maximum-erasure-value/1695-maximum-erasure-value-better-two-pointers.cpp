class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int maxi = 0, sum = 0, j = 0;
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            if(mpp[nums[i]] > 0){
                while(nums[j] != nums[i]){
                    mpp[nums[j]]--;
                    sum-=nums[j];
                    j++;
                }
                j++;
            }
            else {
                mpp[nums[i]]++;
                sum+=nums[i];
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }
};