class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int>ans;

        for(int i = 0 ; i < expression.length(); i++){
            char op = expression[i];
            if(op == '+' || op == '-' || op == '*'){
                vector<int> num1 = diffWaysToCompute(expression.substr(0, i));
                vector<int> num2 = diffWaysToCompute(expression.substr(i+1));

                for(int n1: num1){
                    for(int n2: num2){
                        if(op == '+') ans.push_back(n1+n2);
                        else if(op == '-') ans.push_back(n1-n2);
                        else if(op == '*') ans.push_back(n1*n2);
                    }
                }
            }
        }
        if(ans.empty()) ans.push_back(stoi(expression));
        return ans;
    }
};