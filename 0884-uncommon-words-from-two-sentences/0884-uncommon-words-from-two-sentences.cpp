class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_set<string> s;
        unordered_map<string, int> count;

        int sz1 = s1.size();
        int sz2 = s2.size();
        int st = 0;
        int i = 0;
        while (i < sz1) {
            while (s1[i] != ' ' && i != sz1) {
                i++;
            }
            string w = s1.substr(st, i - st);
            count[w]++;
            i++;
            st = i;
        }

        st = 0;
        i = 0;
        while (i < sz2) {
            while (s2[i] != ' ' && i != sz2) {
                i++;
            }
            string w = s2.substr(st, i-st);
            count[w]++;
            i++;
            st = i;
        }

        for (const auto &pair : count) {
            if(pair.second == 1){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};