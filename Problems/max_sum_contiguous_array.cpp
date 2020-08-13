int Solution::maxSubArray(const vector<int> &A) {
    int sum = 0;
    int orig_max = A[0];
    int i = 0;
    int curr_max = 0;
    while(i < A.size()){
        if(A[i] + sum > 0){
            sum += A[i];
            if(sum > curr_max)
                curr_max = sum;
        }
        else if(A[i] + sum <= 0){
            if(sum == 0)
                curr_max = A[i];
            if(curr_max > orig_max)
                orig_max = curr_max;
            sum=0; curr_max = 0;
        }
        if(i == A.size() - 1){
            if(sum == 0)
                curr_max = A[i];
            if(curr_max > orig_max)
                orig_max = curr_max;
        }
        i++;
    }
    return orig_max;
}