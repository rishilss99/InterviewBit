int Solution::titleToNumber(string A) {
    int sum = 0;
    int i = A.length()-1;
    int power = 0;
    while(i>=0){
        sum+= (int(A[i])-64)*pow(26,power);
        i--;
        power++;
    }
    return sum;
}
