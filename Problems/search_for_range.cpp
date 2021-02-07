int search_occurence(const vector<int> &A, int B, bool searchfirst){
    int low = 0;
    int high = A.size()-1;
    int index = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(A[mid]==B){
            index = mid;
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
    return index;
}

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int> answer;
    answer.push_back(search_occurence(A, B, true));
    answer.push_back(search_occurence(A, B, false));
    return answer;
}
