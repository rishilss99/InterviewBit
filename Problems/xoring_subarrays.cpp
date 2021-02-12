int Solution::solve(vector<int> &A) {
    if(A.size()%2==0)
        return 0;
    int ans = 0;
    for(int i = 0; i<A.size(); i+=2)
        ans^=A[i];
    return ans;
}
