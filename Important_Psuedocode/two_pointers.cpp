int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int i = 0;
    int j = 1;
    while(j<A.size()){
        if(abs(A[j]-A[i])==abs(B) && i!=j)
            return 1;
        else if(abs(A[j]-A[i])<abs(B))
            j++;
        else
            i++;
    }
    return 0;
}
