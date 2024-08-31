class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> result;
        for(int i = 0; i<nums.size(); i++){
            long long int sum = 0;
            if(k == 0){
                cout<<"test1"<<endl;
                result.push_back(nums[i]);
            }
            else if(i-k < 0 || i+k>nums.size()-1){
                result.push_back(-1);
            }
            else {
                for(int j=i-k; j<=i+k; j++){
                    sum+=nums[j];
                }

                result.push_back(sum/(2*k + 1));
            }
        }
        return result;
    }
};