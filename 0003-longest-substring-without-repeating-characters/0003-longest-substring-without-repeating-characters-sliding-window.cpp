class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> unique;
        int maxLen = 0;
        int start = 0;

        for(int i = 0; i < s.length(); i++){
            char c = s[i];

            if(unique.find(c) != unique.end() && unique[c] >= start){
                start = unique[c] + 1;
            }

            unique[c] = i;
            maxLen = max(maxLen, i - start + 1);
        }

        return maxLen;
    }
};