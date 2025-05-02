class Solution {
public:
    string pushDominoes(string dominoes) {
        int len = 0;
        int prev = -1;
        string res = dominoes;

        for(int i = 0; i < dominoes.length(); i++){
            if(dominoes[i] == '.') continue;

            else if(dominoes[i] == 'L'){
                if(prev == -1){
                    for(int j = 0; j < i; j++) res[j] = 'L';
                }
                else if(dominoes[prev] == 'L'){
                    for(int j = prev + 1; j < i; j++) res[j] = 'L';
                }
                else if( dominoes[prev] == 'R'){
                    int left = prev + 1;
                    int right = i - 1;
                    while (left < right) {
                        res[left++] = 'R';
                        res[right--] = 'L';
                    }
                }
                prev = i;
            }

            else if(dominoes[i] == 'R'){
                if(prev!= -1 && dominoes[prev] == 'R'){
                    for(int j = prev + 1; j < i; j++) res[j] = 'R';
                }
                prev = i;
            }

        }

        if(prev!=-1 && dominoes[prev] == 'R'){
            for(int j = prev + 1; j < dominoes.length(); j++) res[j] = 'R';
        }

        return res;
    }
};