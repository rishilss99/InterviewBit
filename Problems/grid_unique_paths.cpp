long factorial(int c){
    if(c == 0)
        return 1;
    return c*factorial(c-1);
}

int Solution::uniquePaths(int A, int B) {
    int a = A-1;
    int b = B-1;
    int sum = a+b;
    long product = 1;
    int c = max(a,b);
    long divisor = factorial(min(a,b));
    while(sum>c){
        product*=sum;
        sum--;
    }
    return product/divisor;
}
''