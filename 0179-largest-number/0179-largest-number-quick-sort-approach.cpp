class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int size = nums.size();
        vector<string> ans;
        string s;
        int zero = 1;

        for(int i = 0; i < size; i++){
            ans.push_back(to_string(nums[i]));
        }

        sort(ans.begin(), ans.end(), [](string &a, string &b) {
            return a + b > b + a;
        });

        for(int i = 0; i < size; i++){
            s+=ans[i];
        }

        for(char c: s){
            if(c!='0'){
                zero = 0;
            }
        }

        if(zero != 1) return s;
        return "0";
    }
};