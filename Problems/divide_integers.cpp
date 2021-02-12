int Solution::divide(int A, int B) {
    if(A == 0)
        return 0;
    if(A == INT_MIN && abs(B) == 1)
        return B==1?INT_MIN:INT_MAX;
    bool negative = ((A<0) && (B>0)) || ((A>0) && (B<0))?true:false;
    A = A==INT_MIN?INT_MAX:abs(A);
    B = abs(B);
    if(B>A)
        return 0;
    int i = 30-(int)(log(B)/log(2));
    int ans = 0;
    while(i>=0){
        if(A >= (B<<i)){
            ans |= 1<<i;
            A -= B<<i;
        }
        i--;
    }
    return negative==true?-1*ans:ans;
}
