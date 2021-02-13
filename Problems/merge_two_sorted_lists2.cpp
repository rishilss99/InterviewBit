void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> result;
    int i = 0;
    int j = 0;
    while(i<A.size() || j<B.size()){
        if(j==B.size()){
            result.push_back(A[i]);
            i++;
        }
        else if(i==A.size()){
            result.push_back(B[j]);
            j++;
        }
        else if(A[i]<B[j]){
            result.push_back(A[i]);
            i++;
        }
        else{
            result.push_back(B[j]);
            j++;
        }
    }
    A = result;
    
}
