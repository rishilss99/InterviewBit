int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A.size()==1) 
        return 1;
    int i = 1;
    int curr = A[0];
    int j = 1;
    while(j<A.size()){
        if(A[j]==curr)
            j++;
        else if(A[j]!=curr){
            curr=A[j];
            A[i]=A[j];
            i++;
        }
    }
    A.resize(i);
    return A.size();
}
