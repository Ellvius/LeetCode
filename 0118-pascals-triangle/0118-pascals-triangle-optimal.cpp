class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        pascal.push_back({1});

        for(int i = 0; i < numRows - 1; i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j = 1; j < pascal[i].size(); j++){
                temp.push_back(pascal[i][j] + pascal[i][j-1]);
            }
            temp.push_back(1);
            pascal.push_back(temp);
        }
        return pascal;
    }
};