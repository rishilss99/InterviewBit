unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unsigned int ans = 0;
    while(A!=0){
        unsigned int a = A & ~(A-1);
        A = A & (A-1);
        ans = ans | (int)pow(2,31-(int)(log(a)/log(2)));
    }
    return ans;
}
