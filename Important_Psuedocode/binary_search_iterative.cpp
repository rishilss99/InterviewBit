int binary_search(const vector<int> &arr, int B){

    int low = 0;
    int high = arr.size()-1;
    
    while(low<=high){

        int mid = low + (high-low)/2;
        
        if(arr[mid] == B)
            return 1;

        else if(arr[mid]<B)
            low = mid + 1;
        
        else
            high = mid+1;
    }
    return -1;
}