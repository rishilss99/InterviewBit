int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low = 0;
    int high = A.size()-1;
    while(low<=high){
        if(A[low]<=A[high])
            return A[low];
        int mid = low + (high-low)/2;
        int prev = (mid + A.size() - 1)%(A.size());
        int next = (mid + 1)%(A.size());
        if(A[mid]<A[next] && A[mid]<A[prev])
            return A[mid];
        else if(A[mid]>A[high])
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}
