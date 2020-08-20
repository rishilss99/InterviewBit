int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    if(A==0)
        return 1;
    int i = pow(10,floor(log10(A)));
    int j = 10;
    while(i>=j && A!=0){
        if(A/i != A%j)
            return 0;
        A%=i;
        A/=j;
        i/=100;
    }
    return 1;
}
