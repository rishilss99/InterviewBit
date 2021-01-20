vector<int> Solution::prime_factorization(int A) {
    for(int i = 2; i<=sqrt(A); i++){
        if(A%i==0){
            int count = 0;
            while(A%i==0){
                A=A/i;
                count++;
            }
        }
        cout<<i<<'^'<<count;
    }
    if(A!=1)
        cout<<A<<'^'<<1;
}