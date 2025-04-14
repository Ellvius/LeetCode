class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n = arr.size();
        int count = 0;
        for(int j = 1; j < n - 1; j++){
            for(int i = 0; i < j; i++){
                for(int k = j + 1; k < n; k++){
                    if(abs(arr[i] - arr[j]) <= a
                    && abs(arr[j] - arr[k]) <= b
                    && abs(arr[i] - arr[k]) <= c
                    ) count++;
                }
            }
        }
        return count;
    }
};