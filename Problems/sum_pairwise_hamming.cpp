int Solution::hammingDistance(const vector<int> &A) {
    long long sum = 0;
    int arr1s[32] = {0};
    for(int k : A){
        int i = 0;
        int temp = k;
        while(temp){
            if(temp%2 == 1)
                arr1s[i]++;
            temp/=2;
            i++;
        }
    }
    for(int k= 0;k<32;k++){
        sum+= 2*arr1s[k]*(A.size()-arr1s[k]);
    }
    
    return sum%1000000007;
}
