class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            if(cnt1 == 0 && nums[i] != el2){
                el1 = nums[i];
            }
            else if(cnt2 == 0 && nums[i] != el1){
                el2 = nums[i];
            }

            if(nums[i] == el1) cnt1++;
            else if (nums[i] == el2) cnt2++;
            else {
                cnt1--, cnt2--;
            }
        }

        cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
        }

        vector<int> res;
        int n = nums.size()/3 + 1;
        if(cnt1 >= n) res.push_back(el1);
        if(cnt2 >= n) res.push_back(el2);
        return res;
    }
};