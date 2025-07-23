class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> adj(n);

        for(auto& time: times){
            adj[time[0]-1].push_back({time[2], time[1] -1});
        }

        vector<int> dist(n, INT_MAX);
        dist[k-1] = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, k -1});

        while(!pq.empty()){
            auto [timeTaken, node] = pq.top();
            pq.pop();

            if (timeTaken > dist[node]) continue;
            
            for(auto& adjNode: adj[node]){
                int t = adjNode.first;
                int v = adjNode.second;
                if(timeTaken + t < dist[v]){
                    dist[v] = timeTaken + t;
                    pq.push({dist[v],v});
                }
            }
        }

        int maxi = INT_MIN;
        for(int dis: dist){
            maxi = max(dis, maxi);
        }
        return maxi == INT_MAX ? -1: maxi;
    }
};