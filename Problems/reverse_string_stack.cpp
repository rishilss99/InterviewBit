string Solution::reverseString(string A) {
    stack<char> reverse;
    for(char k : A)
        reverse.push(k);
    string ans = "";
    while(!reverse.empty()){
        ans+=reverse.top();
        reverse.pop();
    }
    return ans;
        
}