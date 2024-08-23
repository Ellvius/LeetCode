class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0;
        int denominator = 1;
        int i = 0;
        

        while(expression[i]!='\0'){
            int sign = 1;
            int currentNum = 0;
            int currentDen = 0;
            while(expression[i]!='/'){
                if(expression[i] == '-' || expression[i] == '+'){
                    sign = (expression[i] == '-') ? -1:1;
                    i++;
                }
                currentNum = (currentNum*10) + expression[i] - '0';
                i++;
            }
            currentNum = currentNum*sign;
            i++;
            while(isdigit(expression[i])){
                currentDen = (currentDen*10) + expression[i] - '0';
                i++;
            }
            numerator = (numerator*currentDen) + (currentNum*denominator);
            denominator = denominator*currentDen;
        }
        int gcdval = gcd(abs(numerator), denominator);
        numerator = numerator/gcdval;
        denominator = denominator/gcdval;

        string result = to_string(numerator) + "/" + to_string(denominator);
        return result;
    }
};