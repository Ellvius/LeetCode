class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vis, vector<vector<char>>& board, int n, int m){
        vis[i][j] = 1;

        vector<int> dir = {0, 1, 0, -1, 0};
        for(int d = 0; d < 4; d++){
            int ni = i + dir[d];
            int nj = j + dir[d+1];

            if(ni < m && ni >= 0 && nj < n && nj >= 0 && board[ni][nj] == 'O' && !vis[ni][nj]){
                dfs(ni, nj, vis, board, n, m);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++){
            if(board[i][0] == 'O' && !vis[i][0]){
                dfs(i, 0, vis, board, n, m);
            }
            if(board[i][n-1] == 'O' && !vis[i][n-1]){
                dfs(i, n-1, vis, board, n, m);
            }
        }

        for(int i = 0; i < n; i++){
            if(board[0][i] == 'O' && !vis[0][i]){
                dfs(0, i, vis, board, n, m);
            }
            if(board[m-1][i] == 'O' && !vis[m-1][i]){
                dfs(m-1, i, vis, board, n, m);
            }
        }

        for(int i = 1; i < m-1; i++){
            for(int j = 1; j < n-1; j++){
                if(board[i][j] == 'O' && vis[i][j] == 0){
                    board[i][j] = 'X';
                }
            }
        }
    }
};