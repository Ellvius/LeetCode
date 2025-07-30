class Solution {
public:
    int solve(int n, int m, int i, int j, string& s, string& t, vector<vector<int>>& dp){
        if(i == n || j == m) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        if(s[i] == t[j]){
            return dp[i][j] = 1 + solve(n, m, i+1, j+1, s, t, dp);
        }
        return dp[i][j] = max(solve(n, m, i+1, j, s, t, dp), solve(n, m, i, j+1, s, t, dp));
    }

    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();

        vector<vector<int>> dp(n, vector<int>(m, -1));


        return solve(n, m, 0, 0, text1, text2, dp);
    }
};