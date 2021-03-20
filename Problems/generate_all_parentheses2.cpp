void generate_parentheses(int A, vector<string> &set, string current = "", int open_braces = 0, int close_braces = 0){
    if(open_braces==A && close_braces==A){
        set.push_back(current);
        return;
    }
    if(open_braces<A){
        current.push_back('(');
        generate_parentheses(A, set, current, open_braces+1, close_braces);
        current.pop_back();
    }
    if(close_braces<open_braces){
        current.push_back(')');
        generate_parentheses(A, set, current, open_braces, close_braces+1);
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> ans;
    if(A<1)
        return ans;
    generate_parentheses(A, ans);
    return ans;
}
