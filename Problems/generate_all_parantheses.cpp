int Solution::isValid(string A) {
    stack<char> num;
    for(char k: A){
        if(k=='(' || k=='{' || k=='[')
            num.push(k);
        else if(k==')'){
            if(num.empty() || num.top()!='(')
                return 0;
            num.pop();
        }
        else if(k=='}'){
            if(num.empty() || num.top()!='{')
                return 0;
            num.pop();
        }
        else{
            if(num.empty() || num.top()!='[')
                return 0;
            num.pop();
        }
    }
    return num.empty();
        
}
