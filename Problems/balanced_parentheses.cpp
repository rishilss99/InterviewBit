int Solution::solve(string A) {
    stack<int> braces;
    for(char k: A){
        if(k=='('){
            braces.push(1);
        }
        else{
            if(braces.empty())
                return 0;
            braces.pop();
        }
    }
    return braces.empty();
}
