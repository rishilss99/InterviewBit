int search(const vector<int> &A, int start, int end, int B, bool increasing){
    while(start<=end){
        int mid = start + (end-start)/2;
        // cout<<mid<<endl;
        if(A[mid] == B)
            return mid;
        else if(A[mid] < B){
            if(increasing)
                start = mid+1;
            else
                end = mid-1;
        }
        else{
            if(increasing)
                end = mid-1;
            else
                start = mid+1;
        }
    }
    return -1;
    
}

int Solution::solve(vector<int> &A, int B) {
    int low = 0;
    int high = A.size()-1;
    int index = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid] == B)
            return mid;
        else if(A[mid]>A[mid-1] && A[mid]>A[mid+1]){
            index = mid;
            break;
        }
        else if(A[mid]>A[mid-1] && A[mid]<A[mid+1])
            low = mid+1;
        else 
            high = mid-1;
    }
    // cout<<index<<endl;
    int id1 = search(A, 0, index-1, B, true);
    // cout<<endl;
    int id2 = search(A, index+1, A.size()-1, B, false);
    return id1>=0?id1:id2;
    
}
