class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int size = arr.size();
        for(int i = 1; i<size; i++){
            arr[i] = arr[i]^arr[i-1];
        }
        int qsize = queries.size();
        for(int i = 0; i<qsize; i++){
            if(queries[i][0] == 0){
                ans.push_back(arr[queries[i][1]]);
            }
            else{
                ans.push_back(arr[queries[i][0]-1]^arr[queries[i][1]]);
            }
        }
        return ans;
    }
};