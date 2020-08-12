vector<int> Solution::plusOne(vector<int> &A) {
    int i = 0;
    while(A[i]!=0)
        i++;
    reverse(A.begin(),A.end());
    bool carry = false;
    A[0]++;
    for(auto itr = A.begin();itr<A.end();itr++){
        if(carry)
            *itr += 1;
        if(*itr ==  10){
            *itr = 0;
            carry = true;
        }
        else
            carry = false;
    }
    if(carry){
        A.push_back(1);
        reverse(A.begin(),A.end());
        return A;
    }
    int k = A.size()-1;
    while(A[k]==0){
        A.pop_back();
        k--;
    }
    reverse(A.begin(),A.end());
    return A;
    
}
