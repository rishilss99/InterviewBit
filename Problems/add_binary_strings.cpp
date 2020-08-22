string Solution::addBinary(string A, string B) {
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    string result = "";
    int i = 0; int j =0;
    bool carry = false;
    while(i<A.length() || j<B.length() || carry){
        int temp = (i<A.length()?(A[i] - '0'):0) + (j<B.length()?(B[j] - '0'):0) + carry == true;
        cout<<temp<<endl;
        carry = false;
        if(temp<2)
            result += (temp + '0');
        else{
            carry = true;
            result += temp%2;
        }
        i++; j++;
    }
    reverse(result.begin(),result.end());
    return result;
}