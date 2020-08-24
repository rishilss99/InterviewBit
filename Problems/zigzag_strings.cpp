string Solution::convert(string A, int B) {
    if(B==1)
        return A;
    vector<string> string_vec(B);
    int j = 0;
    bool increase;
    for(int i = 0;i<A.size();i++){
        string_vec[j] += A[i];
        if(j == 0)
            increase = true;
        else if(j == B-1)
            increase = false; 
        j = j + (increase == true?1:-1);
    }
    string result = "";
    for(string k : string_vec)
        result+=k;
    return result;
}