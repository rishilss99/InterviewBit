int Solution::gcd(int A, int B) {
    if(!A || !B)
        return max(A,B);
    int c = min(A,B);
    int d = max(A,B);
    if(d%c == 0)
        return c;
    int gcd = 1;
    for(int i = 2;i<=sqrt(c);i++){
        if(c%i == 0){
            if((d%(c/i)) == 0)
                return c/i;
            else if(d%i == 0)
                gcd = i;
        }
    }
    return gcd;
}
