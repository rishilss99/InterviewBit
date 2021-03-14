int Solution::braces(string A) {
    stack<int> braces;
    for(char k : A){
        if(k=='(')
            braces.push(0);
        else if(k=='/' || k=='+' || k=='-' || k=='*'){
            if(!braces.empty()){
                int temp = braces.top();
                braces.pop();
                braces.push(temp+1);
            }
        }
        else if(k==')'){
            if(braces.top()<2)
                return 1;
            braces.pop();
        }
        else{
            if(!braces.empty()){
                int temp = braces.top();
                braces.pop();
                braces.push(temp+1);
            }
        }
    }
    return !braces.empty();
}
