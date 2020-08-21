int Solution::strStr(const string A, const string B) {
    if(A.length() == 0 || B.length() == 0)
        return -1;
    else if(A.length() < B.length())
        return -1;
    int j = 0;
    int start_idx;
    while(j<A.length()){
        // cout<<j<<endl;
        if(A[j] == B[0]){
            start_idx = j;
            int i = 0;
            while(j<A.length() && i<B.length()){
                if(A[j] == B[i]){
                    j++; i++;
                }
                else if(A[j] != B[i])
                    break;
                if(i == B.length())
                    return start_idx;
            }
            if(j == A.length())
                return -1;
            j = start_idx;
        }
        j++;
    }
    return -1;
}
