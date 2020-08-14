int Solution::repeatedNumber(const vector<int> &A) {
    bool *arr = new bool[A.size()];
    for(int i = 0;i<A.size();i++)
        arr[i] = false;
    for(int k : A){
        if(arr[k-1])
            return k;
        arr[k-1]=true;
    }
    return -1;
}
