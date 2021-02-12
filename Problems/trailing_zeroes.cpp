int Solution::solve(int A) {
    A = A & ~(A-1);
    return (int)(log(A)/log(2));
}
