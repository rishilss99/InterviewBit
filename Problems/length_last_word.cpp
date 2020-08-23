int Solution::lengthOfLastWord(const string A) {
    if(A.length() == 0)
        return 0;
    int len = 0;
    int i = A.length()-1;
    while(i>=0 && A[i]==' '){
        i--;
    }
    while(i>=0 && A[i]!=' '){
        len++;
        i--;
    }
    return len;
}
