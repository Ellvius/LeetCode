class Solution {
public:
    string nearestPalindromic(string n) {
        long long num = stoll(n);
        if(num == 1){
            return "0";
        }
        int size = n.size();
        int msize = (n.size()%2 == 0) ? n.size()/2: n.size()/2 +1;
        long long m = stoll(n.substr(0, msize)); 
        long long rev = topalindrome(to_string(m), size);
        long long g;
        if((to_string(m+1).size() > to_string(m).size()) && (size%2==0)){
            g = topalindrome(to_string(m+1), size+1);
        }
        else {
            g = topalindrome(to_string(m+1), size);
        }
        
        long long s;
        if((to_string(m-1).size() < to_string(m).size()) && (size%2==0)){
            s = topalindrome("9"+to_string(m-1), size-1);
        }
        else if(m-1 == 0){
            s = 9;
        }
        else {
            s =  topalindrome(to_string(m-1), size);
        }
        cout<<rev<<" "<<s<<' '<<g<<endl;
        long long gdif = abs(num - g);
        long long sdif = abs(num - s);
        long long revdif = abs(num - rev);
        long long result = g;
        cout<<revdif<<" "<<gdif<<" "<<sdif<<endl;
        if(sdif<=gdif){
            result = s;
        }
        if(revdif<sdif && revdif<gdif && rev!=num){
            result = rev;
        }
        return to_string(result);
    }

private: 
    long long topalindrome(string n, int size){
        if(size%2 == 0){
            return stoll(n+reverse(n));
        }
        string n1 = n.substr(0,size/2);
        return stoll(n+reverse(n1));
    }

    string reverse(string n){
        string rev;
        for (int i = n.length() - 1; i >= 0; --i) {
            rev += n[i];
        }

        return rev;
    }
};