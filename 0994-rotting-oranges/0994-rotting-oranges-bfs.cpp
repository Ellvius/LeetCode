class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        int cnt = 0, gcnt = 0;
        queue<pair<int, int>> q;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                    vis[i][j] = 1;
                }
                else if(grid[i][j] == 1) {
                    gcnt++;
                }
            }
        }
        if(gcnt == 0) return 0;

        vector<int> dir = {0, 1, 0, -1, 0};
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto [i, j] = q.front();
                q.pop();

                for(int d = 0; d < 4; d++){
                    int u = i + dir[d];
                    int v = j + dir[d+1];
                    if(u < m && u >= 0 && v < n && v >= 0
                        && !vis[u][v] && grid[u][v] == 1){
                        gcnt--;
                        grid[u][v] = 2;
                        vis[u][v] = 1;
                        q.push({u, v});
                    }
                }
            }
            cnt++;
        }

        return gcnt == 0 ? cnt - 1 : -1;
    }
};