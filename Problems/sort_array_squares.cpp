vector<int> Solution::solve(vector<int> &A) {
    if(A[0]>0){
        for(int k = 0; k<A.size(); k++)
            A[k]*=A[k];
        return A;
    }
    else if(*(A.end()-1)<0){
        for(int k = 0; k<A.size(); k++)
            A[k]*=A[k];
        return A;
    }
    int i = 0;
    vector<int> result;
    while(A[i]<0)
        i++;
    int j = i-1;
    while(j>=0 || i<A.size()){
        if(i==A.size()){
            result.push_back(A[j]*A[j]);
            j--;
        }
        else if(j<0){
            result.push_back(A[i]*A[i]);
            i++;
        }
        else{
            if(abs(A[j])<=abs(A[i])){
                result.push_back(A[j]*A[j]);
                j--;
            }
            else{
                result.push_back(A[i]*A[i]);
                i++;
            }
        }
    }
    return result;
}
