int Solution::solve(string A) {
    stack<int> s;
    int count = 0;
    for(char k: A){
        if(k=='(')
            s.push(1);
        else{
            if(s.size()<1)
                count++;
            else
                s.pop();
        }
    }
    return count+s.size();
}