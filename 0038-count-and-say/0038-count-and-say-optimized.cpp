class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string s = countAndSay(n - 1);

        int size = s.size();
        string res = "";

        for (int i = 0; i < size;) {
            char c = s[i];
            int count = 0;

            while(i < size && s[i] == c){
                count++;
                i++;
            }
            res+= count + '0';
            res+= c;
        }
        return res;
    }
};