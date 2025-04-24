class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int k = unordered_set<int>(nums.begin(), nums.end()).size();
        unordered_map<int, int> mpp;
        int count = 0, left = 0;

        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            while(mpp.size() == k){
                count += nums.size() - i;
                mpp[nums[left]]--;
                if(mpp[nums[left]] == 0)
                    mpp.erase(nums[left]);
                left++;
            }
        }

        return count;
    }
};