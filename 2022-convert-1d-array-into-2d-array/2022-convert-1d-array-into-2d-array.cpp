class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> result;
        if(m*n!=original.size()){
            return result;
        }
        else {
            vector<int> subvec;
            for(int i = 0; i<original.size(); i++){
                subvec.push_back(original[i]);   
                if((i+1)%n == 0){
                    result.push_back(subvec);
                    subvec.clear();
                }
            }
        }
        return result;
    }
};