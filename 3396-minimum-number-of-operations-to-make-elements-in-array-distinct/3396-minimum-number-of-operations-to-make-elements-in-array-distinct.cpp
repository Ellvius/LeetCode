class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> map;
        int lastIndex = -1;
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) != map.end())
                lastIndex = max(map[nums[i]], lastIndex);

            map[nums[i]] = i;
        }
        int count = (lastIndex + 1) % 3 == 0 ? (lastIndex + 1) /3 : (lastIndex + 1)/3 + 1;
        return count;
    }
};