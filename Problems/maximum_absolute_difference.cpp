int Solution::maxArr(vector<int> &A) {
    int max_A1 = -INT32_MAX; 
    int min_A1 = INT32_MAX;
    int max_A2 = -INT32_MAX; 
    int min_A2 = INT32_MAX;
    for(int i = 0;i<A.size();i++){
        if(A[i]+(i+1)>max_A1)
            max_A1 = A[i] + (i+1);
        if(A[i]+(i+1)<min_A1)
            min_A1 = A[i] + (i+1);
        if(A[i]-(i+1)>max_A2)
            max_A2 = A[i] - (i+1);
        if(A[i]-(i+1)<min_A2)
            min_A2 = A[i] - (i+1);
    }

    return max(max_A1-min_A1,max_A2-min_A2);
    
}
