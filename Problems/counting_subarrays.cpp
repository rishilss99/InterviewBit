int Solution::solve(vector<int> &A, int B) {
    int i = 0;
    int j = 0;
    int sum = 0;
    int count = 0;
    while(j<A.size()){
        if(sum+A[j]<B){
            sum+=A[j];
            j++;
            count+=j-i;
        }
        else{
            if(A[j]>=B){
                j++;
                i=j;
                sum=0;
            }
            else{
                sum -= A[i];
                i++;
                }
        }
    }
    return count;
}
