class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        string d = 'L'+ dominoes + 'R';
        string res = d;

        int i = 0;
        for(int j = 1; j < n + 2; j++){
            if(d[j] == '.') continue;

            char c = d[i];

            if(c == d[j]){
                for(int k = i + 1; k < j; k++) res[k] = c;
            } else if(c == 'L' && d[j] == 'R'){
                for(int k = i + 1; k < j; k++) res[k] = '.';
            } else {
                int left = i + 1;
                int right = j - 1;
                while (left < right) {
                    res[left++] = 'R';
                    res[right--] = 'L';
                }
            }
            i = j;
        }

        return res.substr(1,n);
    }
};