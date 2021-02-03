int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int index = -1;
    int low = 0;
    int high = A.size()-1;
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(A[mid] == B){
            index = mid;
            break;
        }
        else if(A[mid] < B)
            low = mid+1;
        else
            high = mid-1;
    }
    if(index!=-1)
        return index;
    index = mid;
    if(A[index]>B){
        while(A[index]>B && index>=0)
            index--;
        return index+1;
    }
    else{
        while(A[index]<B && index<A.size())
            index++;
        return index;
    }
    
}
