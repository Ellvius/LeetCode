class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> res(m, vector<int>(n, 0));
        using t = tuple<int, int, int>;
        queue<t> q;

        vector<vector<int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
        vector<vector<bool>> vis(m, vector<bool>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if(mat[i][j] == 0){
                    vis[i][j] = 1;
                    q.push({i, j, 1});
                }
            }
        }
    

        while (!q.empty()) {
            auto [i, j, dist] = q.front();
            q.pop();

            for (auto it : dir) {
                int x = i + it[0];
                int y = j + it[1];
                int z = dist;
                if (x < m && x >= 0 && y < n && y >= 0 && !vis[x][y]) {
                    if (mat[x][y] == 1)
                        res[x][y] = dist;

                    vis[x][y] = 1;
                    q.push({x, y, z+1});
                }
            }
        }
        return res;
    }
};