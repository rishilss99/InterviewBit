int Solution::evalRPN(vector<string> &A) {
    stack<int> num;
    int a, b;
    for(string k : A){
        if(k=="+"){
            a = num.top();
            num.pop();
            b = num.top();
            num.pop();
            num.push(b+a);
        }
        else if(k=="-"){
            a = num.top();
            num.pop();
            b = num.top();
            num.pop();
            num.push(b-a);
        }
        else if(k=="/"){
            a = num.top();
            num.pop();
            b = num.top();
            num.pop();
            num.push(b/a);
            
        }
        else if(k=="*"){
            a = num.top();
            num.pop();
            b = num.top();
            num.pop();
            num.push(b*a);
            
        }
        else{
            num.push(stoi(k));
        }
    }
    return num.top();
}
