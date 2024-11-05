class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        vector<vector<int>> adj(n);
        for( const auto &edges: edges){
            adj[edges[0]].push_back(edges[1]);
            adj[edges[1]].push_back(edges[0]);
        }

        vector<int> vis(n,0);

        return dfs(source, destination, adj, vis);
    }

private:
    bool dfs(int u, int v, vector<vector<int>>& adj, vector<int>& vis){
        if(u == v) return true;
        vis[u] = 1;

        for(int x: adj[u]){
            if(!vis[x]){
                if(dfs(x, v, adj, vis)) return true;
            }
        }
        return false;
    }
};