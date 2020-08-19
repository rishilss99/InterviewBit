string Solution::convertToTitle(int A) {
    string result = "";
    while(A){
        result+= '@' + (A%26==0?26:A%26);
        A=A%26==0?(A/26)-1:A/26;
    }
    reverse(result.begin(),result.end());
    return result;
}
