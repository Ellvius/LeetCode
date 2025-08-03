class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        queue<pair<int, int>> q;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if((i == 0 || i == m-1 || j == 0 || j == n-1) && board[i][j] == 'O'){
                    q.push({i, j});
                    vis[i][j] = 1;
                }
            }
        }

        vector<int> dir = {0, 1, 0, -1, 0};

        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();

            for(int d = 0; d < 4; d++){
                int nr = r + dir[d];
                int nc = c + dir[d+1];

                if(nr < m && nr >= 0 && nc < n && nc >= 0 && !vis[nr][nc] && board[nr][nc] == 'O'){
                    q.push({nr, nc});
                    vis[nr][nc] = 1;
                }
            }
        }

        for(int i  = 1; i < m-1; i++){
            for(int j = 1; j < n-1; j++){
                if(board[i][j] == 'O' && !vis[i][j]){
                    board[i][j] = 'X';
                }
            }
        }
    }
};