int Solution::KMP_algorithm(const string A, const string B) {
    // Note the similarity in both the loop pretty straight forward implementation if you get the logic
    // Make pi table first
    vector<int> lps(B.length(),0);
    int i = 0;
    int j = 1;
    while(j<B.length()){
        if(B[i]==B[j]){
            lps[j] = i+1;
            i++;
            j++;
        }
        else{
            if(i==0){
                j++;
            }
            else
                i = lps[i-1];
        }
    }
    //Now iterate comparing both the strings
    int k = 0;
    int l = 0;
    while(k<A.length()){
        if(l==B.length())
            return k-B.length();
        if(A[k] == B[l]){
            k++;
            l++;
        }
        else if(A[k]!=B[l]){
            if(l == 0){
                k++;
            }
            else{
                l = lps[l-1];
            }
        }
    }
    if(l==B.length())
        return k-B.length()+1;
    else
        return -1;
}
