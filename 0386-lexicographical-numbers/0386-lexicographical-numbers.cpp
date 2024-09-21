class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;

        for(int i = 1; i < 10; i++){
            dfs(i, ans, n);
        }
        return ans;
    }
private: 
    void dfs(int cur, vector<int> &ans, int n){
        if(cur>n){
            return;
        }
        
        ans.push_back(cur);

        for(int i = 0; i < 10; i++){
            if(cur*10  > n) return;
            dfs(cur*10 + i, ans, n);
        }
    }
};