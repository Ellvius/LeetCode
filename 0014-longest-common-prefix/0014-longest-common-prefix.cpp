class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        unordered_set<string> str;
        string longPrefix = strs[0];
        int end = strs[0].length();
        for(int i = 1; i < strs.size(); i++){
            if(end == 0) return "";
            int len = strs[i].length();
            if(end > len) end = len;
            while(longPrefix.substr(0,end)!=strs[i].substr(0,end)){
                end--;
            }
        }
        return longPrefix.substr(0, end);
    }
};