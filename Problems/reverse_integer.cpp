int Solution::reverse(int A) {
    if(!A)
        return A;
    bool negative = A<0;
    if(negative)
        A*=-1;
    long result = 0;
    while(A){
        result*=10;
        result+=A%10;
        if(result>INT32_MAX)
            return 0;
        A/=10;
    }
    return result * (negative==true?-1:1);
}
