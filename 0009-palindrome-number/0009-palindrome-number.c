bool isPalindrome(int x) {
    if(x<0)
        return false;
    long long rev= 0;
    long long temp = x;
    while(temp>0){
        rev=10*rev + (temp%10);
        temp=temp/10;
    }
    return rev == x;
}