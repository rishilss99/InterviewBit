void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i = 0;
    while(i<A.size()){
        A[i] += ((A[A[i]])%A.size())*A.size();
        i++;
    }
    for(int i = 0;i<A.size();i++)
        if(A[i]!=0)
            A[i]/=A.size();
    
}
