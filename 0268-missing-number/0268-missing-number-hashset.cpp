class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> st;

        for(int num: nums){
            st.insert(num);
        }

        for(int i = 0; i < nums.size() + 1; i++){
            if(st.find(i) == st.end()) return i;
        }
        return nums.size();
    }
};