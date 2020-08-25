int Solution::power(string A) {
    if(A == "2")
        return 1;
    if((A.back() - '0') % 2 != 0)
        return 0;
    string result = "";
    int i = 0;
    bool remain = false;
    bool first_zero = false;
    while(i<A.length()){
        if(i == 0 || first_zero)
            first_zero = ((A[i] - '0') == 0);
        if(!first_zero){
            int num = ((remain == true)*10 + (A[i] - '0'));
            remain = num%2;
            result += ((num/2) + '0');
        }
        i++;
    }
    return power(result);
}
