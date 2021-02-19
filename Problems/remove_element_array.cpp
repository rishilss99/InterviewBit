int Solution::removeElement(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i = 0;
    int j = 0;
    while(j<A.size()){
        if(A[i]!=B && A[j]!=B){
            i++;
            j++;
        }
        else if(A[i]==B && A[j]==B){
            j++;
        }
        else if(A[i]==B && A[j]!=B){
            swap(A[i],A[j]);
            i++;
            j++;
        }
    }
    return i;
}
