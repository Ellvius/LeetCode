class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        if(m == 0) return 0;
        int n = grid[0].size();

        int count = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]=='1'){
                    dfs(i, j, grid, m, n);
                    count++;
                }
            }
        }
        return count;
    }

private:
    void dfs(int i, int j, vector<vector<char>>& grid, int m , int n){
        if(i<0 || i>m-1 || j<0 || j>n-1 || grid[i][j]=='0') return;

        grid[i][j] = '0';

        dfs(i+1, j, grid, m, n);
        dfs(i-1, j, grid, m, n);
        dfs(i, j+1, grid, m, n);
        dfs(i, j-1, grid, m, n);
    }
};