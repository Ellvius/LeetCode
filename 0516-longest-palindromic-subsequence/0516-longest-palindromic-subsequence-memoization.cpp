class Solution {
public:
    int solve(int i, int j, int n, string& s,vector<vector<int>>& dp){
        if(i == n || j < 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];

        if(s[i] == s[j]){
            return dp[i][j] =1 + solve(i+1, j -1, n, s, dp);
        }
        return dp[i][j] = max(solve(i+1, j, n, s, dp), solve(i, j -1, n, s, dp));
    }

    int longestPalindromeSubseq(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solve(0, n-1, n, s, dp);
    }
};