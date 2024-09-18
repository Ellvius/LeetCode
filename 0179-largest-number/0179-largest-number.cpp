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

        for(int i = 0; i < size; i++){
            for(int j = 1; j < size - i; j++){
                if(ans[j]+ans[j-1] > ans[j-1]+ans[j]){
                    swap(ans[j], ans[j-1]);
                }
            }
        }

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