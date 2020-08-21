int Solution::compareVersion(string A, string B) {
    int i = 0;
    int k = 0;
    while(i<A.length() && k<B.length()){
        long curr1 = 0, curr2 = 0;
        while(i<A.length() && k<A.length() && A[i] == B[k]){
                i++;
                k++;
            }
        while((i<A.length() && A[i]!='.') || (k<B.length() && B[k]!='.')){
            if(i<A.length() && A[i] != '.'){
                curr1*=10;
                curr1+=A[i] - '0';
                i++;
            }
            if(k<B.length() && B[k] != '.'){
                curr2*=10;
                curr2+=B[k] - '0';
                k++;
            }
            if(A[i] == '.' && curr1 < curr2)
                return -1;
            else if(B[k] == '.' && curr1 > curr2)
                return 1;
        }
        if(curr1>curr2)
            return 1;
        else if(curr1<curr2)
            return -1;
        i++;
        k++;
    }
    // cout<<i<<" "<<k<<endl;
    if(i>=A.length() && k>=B.length())
        return 0;
    else if(i<A.length()){
        while(i<A.length()){
            if(A[i]!='0')
                return 1;
            i++;
        }
        return 0;
    }
    else{
        while(k<B.length()){
            if(B[k]!='0')
                return -1;
            k++;
        }
        return 0;
    }
    
} ''