class Solution {
    string decodeString(const string& s) {
        int n = s.length();
        vector<pair<int, char>> decodedString;

        int count = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                decodedString.emplace_back(count, s[i - 1]);
                count = 1;
            }
        }
        decodedString.emplace_back(count, s[n - 1]);

        string res;
        for (const auto& [len, ch] : decodedString) {
            res += to_string(len) + ch;
        }

        return res;
    }

public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        return decodeString(countAndSay(n - 1));
    }
};