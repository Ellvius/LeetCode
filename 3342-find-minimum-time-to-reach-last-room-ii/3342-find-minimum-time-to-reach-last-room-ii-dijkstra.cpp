class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size();
        int m = moveTime[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;

        pq.push({0,0,0});
        moveTime[0][0] = 0;

        vector<vector<int>> directions{{-1,0},{0,1},{1,0},{0,-1}};
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            int t = curr[0], i = curr[1], j = curr[2];

            if(t >= dp[i][j]) continue;
            if(i == n-1 && j == m-1) return t;
            dp[i][j] = t;

            for(auto& dir: directions){
                int i_ = i + dir[0];
                int j_ = j + dir[1];
                if(i_ >= 0 && i_ < n && j_ >= 0 && j_ < m && dp[i_][j_] == INT_MAX){
                    int delay = (i + j) % 2 + 1;
                    int start = max(moveTime[i_][j_], t);
                    int nextTime = start + delay;
                    pq.push({nextTime, i_, j_});
                }
            }
        }
        return -1;
    }
};