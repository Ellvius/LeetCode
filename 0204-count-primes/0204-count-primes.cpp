class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;

        vector<bool> ans(n,true);
        ans[0] = ans[1] = false;
        for(int i=2 ; i*i < n; i++){
            if(ans[i]){
                for(int j = i*i; j <n; j+=i){
                    if(ans[j])
                    ans[j] = false;
                }
            }
        }
        int c = 0;
        for(int i=0; i <n; i++){
            if(ans[i]){
                c++;
            }
        }
        return c;
    }
};