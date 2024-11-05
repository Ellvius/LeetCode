class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);

        int count = 0;
        for(int i = 0; i < n; i++){
            if(!vis[i]){
                dfs(i, n, isConnected, vis);
                count++;
            }
        }
        return count;
    }

private:
    void dfs(int u, int n, vector<vector<int>>& graph, vector<int>& vis){
        vis[u] = 1;

        for(int v = 0; v < n; v++){
            if(graph[u][v] && !vis[v]){
                dfs(v, n, graph, vis);
            }
        }
    }
};