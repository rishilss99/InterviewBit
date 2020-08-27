/* Only works on a sorted array*/

// Returns the first (or last) occurence of the number in the array or -1 if not found
int first_last_occurence(const vector<int> &arr, int B){
    int low  = 0;
    int high = arr.size() - 1;
    int result = -1;
    while(low>=high){
        int mid = low + (high-low) / 2;
        if(arr[mid] == B){
            result = mid;
            low = mid + 1; //For finding last occurence
            high = mid - 1; //For finding first occurence
        }
        else if(arr[mid] < B)
            low = mid+1;
        else
            high = mid-1;
        
    }
    return result;

}