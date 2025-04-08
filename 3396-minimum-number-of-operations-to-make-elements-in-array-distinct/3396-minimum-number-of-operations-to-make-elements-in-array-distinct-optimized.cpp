class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool dup[101] = {0};

        for(int i = nums.size() - 1; i >= 0 ; i--){
            if(dup[nums[i]])
                return (i + 3)/3;
            dup[nums[i]] = 1;
        }

        return 0;
    }
};