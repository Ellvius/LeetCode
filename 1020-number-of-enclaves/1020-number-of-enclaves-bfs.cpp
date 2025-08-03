class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n  = grid[0].size();
        queue<pair<int,int>> q;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || i == m-1 || j == 0 || j == n-1){
                    if(grid[i][j] == 1){
                        q.push({i, j});
                        grid[i][j] = -1;
                    }
                }
            }
        }

        int dir[] = {0, 1, 0, -1, 0};

        while(!q.empty()){
            auto [row, col] = q.front();
            q.pop();

            for(int idx = 0; idx < 4; idx++){
                int nrow = row + dir[idx];
                int ncol = col + dir[idx+1];

                if(nrow < m && nrow >= 0 && ncol < n && ncol >= 0 && grid[nrow][ncol] == 1){
                    q.push({nrow, ncol});
                    grid[nrow][ncol] = -1;
                }
            }

        }

        int cnt = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1) cnt++;
            }
        }
        return cnt;
    }
};