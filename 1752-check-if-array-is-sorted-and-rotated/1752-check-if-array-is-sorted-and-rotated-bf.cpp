class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size();
        for (int i = 0; i < nums.size(); i++){
            bool rot = true;
            for(int j = 0; j < nums.size() - 1; j++){
                if(nums[(j + i)% n] > nums[(j+i+1) % n]){
                    rot = false;
                    break;
                }
            }
            if(rot) return true;
        }

        return false;
    }
};