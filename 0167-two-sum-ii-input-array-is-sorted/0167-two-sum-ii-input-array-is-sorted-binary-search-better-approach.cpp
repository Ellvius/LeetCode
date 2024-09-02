class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int low = 0;
        int high = numbers.size() -1;
        
        while(low<=high){
            int key = numbers[low] + numbers[high];

            if(key == target){
                result.push_back(low+1);
                result.push_back(high+1);
                return result;
            }
            else if(key<target){
                low = low + 1;
            }
            else {
                high = high - 1;
            }
        }
        return result;
    }
};