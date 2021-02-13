int Solution::diffPossible(vector<int> &A, int B) {
    int i = 0;
    int j = 1;
    while(j<A.size() && i<A.size()){
        // cout<<i<<" "<<j<<endl;
        if(abs(A[j]-A[i])==abs(B) && i!=j)
            return 1;
        else if(abs(A[j]-A[i])<abs(B) || i==j)
            j++;
        else
            i++;
    }
    return 0;
}
