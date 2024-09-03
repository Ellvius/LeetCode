class Solution {
public:
    int getLucky(string s, int k) {
        string ans;
        int sum;
        for(int i = 0; i< s.size(); i++){
            ans+= to_string(s[i] - 'a' + 1);
        }

        for(int j = 0; j < k; j++){
            sum = 0;
            for(int i = 0; i < ans.size(); i++){
                sum+= (ans[i] - '0');
            }
            ans = to_string(sum);
        }
        
        return sum;
    }
};