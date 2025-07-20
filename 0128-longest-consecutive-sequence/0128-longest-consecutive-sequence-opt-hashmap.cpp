class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for(auto i: st){
            int cnt = 1;
            if(st.find(i-1) == st.end()){
                while(st.find(i+1) != st.end()){
                    cnt++;
                    i++;
                }
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};