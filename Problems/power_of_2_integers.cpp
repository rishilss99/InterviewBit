int Solution::isPower(int A) {
    if()
    int num = sqrt(A);
    for(int i = 2;i<=num;i++){
        float num = log(A)/log(i);
        bool check = (ceil(num) == floor(num));
        if(check && num>1)
            return 1;
    }
    return 0;
}