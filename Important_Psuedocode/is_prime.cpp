int Solution::isPrime(int A) {
    for(int i = 2 ; i<=sqrt(A);i++){
        if(A%i == 0) return 0;
    }
    return A==1?0:1;
}
