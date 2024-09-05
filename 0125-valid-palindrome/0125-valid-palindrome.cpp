class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int e = s.size() - 1;
        while(1){
            if(e<=i) return true;
            if(isalnum(s[i]) && isalnum(s[e])){
                if(tolower(s[i]) != tolower(s[e])){
                    return false;
                }
                i++; e--;
            }
            if(!isalnum(s[i])) i++;
            if(!isalnum(s[e])) e--;
        }
    }
};