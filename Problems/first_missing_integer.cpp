int Solution::firstMissingPositive(vector<int> &A) {
    bool *arr = new bool[A.size()];
    for(int i = 0;i<A.size();i++)
        arr[i] = false;
    for(int k : A){
        if(k>0 && k<=A.size())
            arr[k-1]=true;
    }
    int k;
    for(k = 0;k<A.size();k++){
        if(arr[k] == false)
            return k+1;
    }
    return k+1;
}
