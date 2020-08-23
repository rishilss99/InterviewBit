string Solution::solve(string A) {
    stack<char> word;
    string result = "";
    int i = A.length()-1;
    while(i >= 0){
        if(A[i] == ' '){
            if(!word.empty()){
                while(!word.empty()){
                    result+=word.top();
                    word.pop();
                }
                result+=' ';
            }
        }
        else
            word.push(A[i]);
        i--;
    }
    if(!word.empty()){
        while(!word.empty()){
            result+=word.top();
            word.pop();
        }
    }
    if(result.back() == ' ')
        result.pop_back();
    return result;
}
