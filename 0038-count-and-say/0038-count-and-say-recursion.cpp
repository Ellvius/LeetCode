class Solution {
    string convert(string s){
        int n = s.length();
        vector<pair<int,char>> decodedString;

        int count = 1;
        int i;
        for(i = 1; i < n; i++){
            if(s[i] == s[i -1]) 
                count++;
            else {
                decodedString.push_back({count, s[i - 1]});
                count = 1;
            }
        }
        decodedString.push_back({count, s[i - 1]});

        string res = "";
        for(auto& p: decodedString){
            res += to_string(p.first) + p.second;
        }
        
        return res;
    }
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        return convert(countAndSay(n-1));
    }
};