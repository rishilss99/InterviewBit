bool check_prime(int k){
    for(int i = 3;i<=sqrt(k);i+=2){
        if(k%i==0) return false;
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    vector<int> result;
    if(A == 4){
        result.push_back(2);
        result.push_back(2);
        return result;
    }
    for(int i = 3; i <= A/2 ; i+=2){
        if( check_prime(i) ){
            if(check_prime(A-i)){
                result.push_back(i);
                result.push_back(A-i);
                break;
            }
        }
    }
    return result;
}
