int Solution::solve(vector<int> &A, int B) {
    int count = 0;
    int i = 0;
    int j = 0;
    int length = INT_MIN;
    while(j<A.size()){
        if(A[j]==0)
            count++;
        if(count<=B)
            j++;
        else{
            length = max(length, j-i);
            if(A[i]==0)
                count--;
            i++;
            // j++;
        }
    }
    return max(length, j-i);
}
