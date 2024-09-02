class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for(int i = 0; i<numbers.size(); i++){
            int search = binarySearch(numbers, target-numbers[i],i+1);
            if(search != -1){
                result.push_back(i+1);
                result.push_back(search+1);
                return result;
            }
        }
        return result;
    }

private:
    int binarySearch(vector<int>& numbers, int key, int start){
        int low = start;
        int high = numbers.size() -1;
        
        while(low<=high){
            int mid = low + (high-low)/2;

            if(numbers[mid] == key){
                return mid;
            }
            else if(key<numbers[mid]){
                high = mid -1;
            }
            else {
                low = mid + 1;
            }
        }
        return -1;
    }
};