class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> un;
        for(int i =0; i < n-3; i++){
            for(int j = i+1; j < n - 2; j++){
                unordered_set<long long> st;
                for(int k = j+1; k < n; k++){
                    long long sum = nums[i] + nums[j];
                    sum+=nums[k];
                    long long bal = target - sum;

                    if(st.find(bal) != st.end()){
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)bal};
                        sort(temp.begin(), temp.end());
                        un.insert(temp);
                    }
                    st.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>>(un.begin(), un.end());
    }
};