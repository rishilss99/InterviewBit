string mult(string A, int b){
    reverse(A.begin(),A.end());
    string ans = "";
    int i = 0;
    int carry = 0;
    while(i<A.length()){
        int temp = (A[i] - '0')*b + carry; 
        ans+= ((temp%10) + '0');
        carry = temp/10;
        i++;
    }
    if(carry)
        ans += (carry + '0');
    reverse(ans.begin(),ans.end());
    return ans;
}

void add_strings(string &res, string &temp){
    reverse(res.begin(),res.end());
    reverse(temp.begin(),temp.end());
    int carry = 0;
    int i = 0;
    while( i < temp.length()){
        int num = (i<res.length()?(res[i] - '0'):0) + carry + (temp[i] - '0');
        if(i<res.length())
            res[i] = ((num%10) + '0');
        else
            res += ((num%10) + '0');
        carry = num/10;
        i++;
    }
    if(carry)
        res += (carry + '0');
    reverse(res.begin(),res.end());
}

string Solution::multiply(string A, string B) {
    int i = 0, j = 0;
    while(i<A.length() && A[i] == '0')
        i++;
    while(j<B.length() && B[j] == '0')
        j++;
    if(i == A.length() || j == B.length())
        return "0";
    A = A.substr(i);
    B = B.substr(j);
    string result = "";
    int k = B.length()-1;
    while(k>=0){
        if((B[k]-'0')!=0){
            string temp = mult(A,(B[k]-'0'));
            int m = B.length()-1;
            while(m>k){
                temp+='0';
                m--;
            }
            add_strings(result, temp);
        }
        k--;
    }
    // reverse(result.begin(),result.end());
    return result;
}
