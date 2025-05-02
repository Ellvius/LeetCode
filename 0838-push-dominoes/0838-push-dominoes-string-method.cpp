class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        string d = 'L'+ dominoes + 'R';
        string res = "";

        int i = 0;
        for(int j = 1; j < n + 2; j++){
            if(d[j] == '.') continue;

            int len = j - i - 1;

            if(d[i] == d[j]){
                res += d[i] + string(len, d[i]);
            } else if(d[i] == 'L' && d[j] == 'R'){
                res += d[i] + string(len, '.');
            } else {
                res += 'R' + string(len / 2, 'R') + string(len % 2, '.') + string(len / 2, 'L');
            }
            i = j;
        }

        return res.substr(1,n);
    }
};