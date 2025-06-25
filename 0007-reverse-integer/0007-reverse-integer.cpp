class Solution {
public:
    int reverse(int x) {
        long int ans = 0;
        int sign = (x<0) ? -1:1;
        long int y = abs(static_cast<long int>(x));
        while(y>0){
            int dig = y%10;
            ans = 10*ans + dig;
            y = y / 10;
        }
        if(ans > 2147483647 || ans < -2147483648){
            return 0;
        }
        return sign*ans;
    }
};