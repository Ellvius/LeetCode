class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;

        long rev = 0;
        int n = x;

        while(n > 0){
            rev = (rev * 10) + (n % 10);
            n /= 10;
        }

        return rev == x;
    }
};