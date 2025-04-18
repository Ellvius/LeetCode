class Solution {
    string RLE(const string& s) {
        int n = s.length();
        string res;
        
        for (int i = 0; i < n;) {
            char cur = s[i];
            int count = 0;

            while(i < n && s[i] == cur){
                count++;
                i++;
            }
            res+= to_string(count) + cur;
        }
        return res;
    }

public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        return RLE(countAndSay(n - 1));
    }
};