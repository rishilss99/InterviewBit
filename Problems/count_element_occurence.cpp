int occurence_search(const vector<int> &A, int B, bool searchfirst){
    int low = 0;
    int high = A.size()-1;
    int result = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid] == B){
            result = mid;
            if(searchfirst)
                high = mid-1;
            else
                low = mid+1;
        }
        else if(A[mid]<B)
            low = mid+1;
        else
            high = mid-1;
    }
    return result;
}

int Solution::findCount(const vector<int> &A, int B) {
    
    int first_ind = occurence_search(A,B,true);
    int last_ind = occurence_search(A,B,false);
    return first_ind == -1?0:(last_ind-first_ind+1);
}
