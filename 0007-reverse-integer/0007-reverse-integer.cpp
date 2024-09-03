class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        int sign = (x<0) ? -1:1;
        x = abs(x);
        while(x>0){
            int dig = x%10;
            ans = 10*ans + dig;
            x = x / 10;
        }
        if(ans > 2147483647 || ans < -2147483648){
            return 0;
        }
        return sign*ans;
    }
};