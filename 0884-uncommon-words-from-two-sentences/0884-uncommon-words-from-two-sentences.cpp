class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_set<string> s;

        int sz1 = s1.size();
        int sz2 = s2.size();
        int st = 0;
        int i = 0;
        while (i < sz1) {
            int len = 0;
            while (s1[i] != ' ' && i != sz1) {
                len++;
                i++;
            }
            string w = s1.substr(st, len);
            auto in = s.find(w);
            if (in != s.end()) {
                s.erase(in);
            } else {
                s.insert(w);
            }
            i++;
            st = i;
        }

        st = 0;
        i = 0;
        while (i < sz2) {
            int len = 0;
            while (s2[i] != ' ' && i != sz2) {
                len++;
                i++;
            }
            string w = s2.substr(st, len);
            auto in = s.find(w);
            if (in != s.end()) {
                s.erase(in);
            } else {
                s.insert(w);
            }
            i++;
            st = i;
        }

        for (string el : s) {
            ans.push_back(el);
        }
        return ans;
    }
};