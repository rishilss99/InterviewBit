string Solution::longestCommonPrefix(vector<string> &A) {
    string result = A[0];
    for(string k : A){
        for(int i = 0;i<min(result.length(),k.length());i++){
            if(result[i] != k[i]){
                result.erase(i);
                break;
            }
            if(i == k.length() - 1 && result.length() > i+1){
                result.erase(i+1);
                break;
            }
        }
    }
    return result;
}
