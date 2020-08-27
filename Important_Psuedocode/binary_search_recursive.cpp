int binary_search(const vector<int> &arr, int B, int low = 0, int high = arr.size()-1){

    if(low>high)
        return -1;
    int mid = low + (high - low)/2;
    if(A[mid] ==  B)
        return 1;
    else if (A[mid] < B)
        return binary_search(arr,B,mid+1,high);
    else
        return binary_search(arr,B,low,mid-1);
}