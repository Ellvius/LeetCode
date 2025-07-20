class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int t = 0, b = matrix.size()-1;
        int l = 0, r = matrix[0].size()-1;

        while(t <= b && l <= r){
            // move right
            for(int i = l; i <= r; i++)
                ans.push_back(matrix[t][i]);
            t++;

            // move down
            for(int i = t; i <= b; i++)
                ans.push_back(matrix[i][r]);
            r--;

            // move left
            if(t <= b){
                for(int i = r; i >= l; i--)
                    ans.push_back(matrix[b][i]);
                b--;
            }

            // move up
            if(l <= r){
                for(int i = b; i >= t; i--)
                    ans.push_back(matrix[i][l]);
                l++;
            }
        }
        return ans;
    }
};