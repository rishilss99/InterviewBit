int Solution::gcd(int A, int B) {

    /* Solution you can understand*/
    int dividend = A;
    int divisor = B;
    while(divisor!=0){
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;


    /*Shortest possible solution*/
    return B==0?A:gcd(B,A%B);
}
