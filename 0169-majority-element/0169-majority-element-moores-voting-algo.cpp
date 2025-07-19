class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el, cnt = 0;

        for(int num: nums){
            if(cnt == 0) el = num;
            if(num == el) cnt++;
            else {
                cnt--;
            }            
        }
        return el;
    }
};