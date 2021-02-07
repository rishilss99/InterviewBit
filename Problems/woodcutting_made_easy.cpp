int Solution::solve(vector<int> &A, int B) {
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i = 0; i<A.size(); i++){
        if(A[i] > high)
            high = A[i];
        if(A[i] < low)
            low = A[i];
    }
    while(low<=high){
        int mid = low + (high-low)/2;
        long long sum = 0;
        for(int k : A)
            sum += k>mid?(k-mid):0;
        if(sum == B)
            return mid;
        else if(sum < B)
            high = mid-1;
        else
            low = mid+1;
    }
    return low-1;
    
}
