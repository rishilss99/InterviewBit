int Solution::solve(int A) {
    int i = 2;
    int ans = 0;
    int end = (int)(log(A)/log(2));
    while(end>=0){
        int first = (A/i)*(i/2);
        int second = (A%i)>=(i/2)?(A%i)-(i/2)+1:0;
        i*=2;
        ans = ans + first + second;
        end--;
    }
    return (ans) % (int)(1e9+7);
}
