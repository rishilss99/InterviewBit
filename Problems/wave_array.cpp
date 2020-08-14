vector<int> Solution::wave(vector<int> &A) {
    vector<int> result;
    sort(A.begin(),A.end());
    int i = 0;
    int j = 1;
    while(i<A.size()-1){
        result.push_back(A[j]);
        result.push_back(A[i]);
        i+=2; j+=2;
    }
    if(result.size()==A.size()-1)
        result.push_back(A[i]);
    return result;
}
