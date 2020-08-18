vector<int> Solution::sieve(int A) {
    bool *arr = new bool[A+1];
    for(int i = 0;i<=A;i++)
        arr[i] = 1;
    arr[0] = 0;
    arr[1] = 0;
    for(int k = 2;k<=sqrt(A);k++){
        for(int j = 2;j*k<=A;j++){
            arr[k*j] = 0;
        }
    }
    vector<int> result;
    for(int l = 2;l<=A;l++){
        if(arr[l])
            result.push_back(l);
    }
    return result;
}
