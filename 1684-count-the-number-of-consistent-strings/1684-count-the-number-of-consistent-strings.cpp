class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> c;
        int ans = 0;
        for(int i = 0; i < allowed.size(); i++){
            c.insert(allowed[i]);
        }
        
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j<words[i].size(); j++){
                if(c.find(words[i][j]) == c.end()){
                    ans--;
                }
            }
            ans++;
        }
        return ans;
    }
};