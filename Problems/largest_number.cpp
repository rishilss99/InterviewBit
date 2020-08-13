bool compare_order(int a, int b){
    if(a == b)
        return true;
    int ten_multiple_a = pow(10,floor(log10(a)));
    int ten_multiple_b = pow(10,floor(log10(b)));
    int store_a = a;
    int store_b = b;
    bool complete_a = false;
    bool complete_b = false;
    while(!complete_a || !complete_b){
        // cout<<a<<" "<<b<<endl;
        if(a == 0 && ten_multiple_a == 0){
            a = store_a;
            ten_multiple_a = pow(10,floor(log10(a)));
            complete_a = true;
        }
        if(b == 0 && ten_multiple_b == 0){
            b = store_b;
            ten_multiple_b = pow(10,floor(log10(b)));
            complete_b = true;
        }
        // cout<<a/ten_multiple_a<<" "<<b/ten_multiple_b<<endl;
        if(a/ten_multiple_a < b/ten_multiple_b)
            return false; //a Smaller b
        else if(a/ten_multiple_a > b/ten_multiple_b)
            return true; //a Greater b
        a%=ten_multiple_a;
        b%=ten_multiple_b;
        ten_multiple_a/=10;
        ten_multiple_b/=10;
    }
    return true;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> b = A;
    string result = "";
    sort(b.begin(),b.end(),compare_order);
    if(b.front() == 0){
        result+='0';
        return result;
    }
    for(int k : b)
        result += to_string(k);
    return result;
}
