int Solution::atoi(const string A) {
    if(!isdigit(A[0]) && A[0]!='-' && A[0]!='+')
        return 0;
    bool neg = false;
    int i = 0;
    if(A[0] == '-'){
        neg = true;
        i++;
    }
    else if(A[0] == '+')
        i++;
    int num = 0;
    while(isdigit(A[i])){
        if(num>INT32_MAX/10)
            return neg==true?INT32_MIN:INT32_MAX;
        else if(num == INT32_MAX/10){
            if(neg == false && (A[i] - '0')>7)
                return INT32_MAX;
            else if(neg == true && (A[i] - '0')>8)
                return INT32_MIN;                
        }
        num *= 10;
        num += (A[i] - '0');
        i++;
    }
    return num*(neg==true?-1:1);
}