bool check_palindrome(string s){
    if(s.length()==0)
        return false;
    if(s.length()==1)
        return true;
    int i = 0, j = s.length()-1;
    while(i<j){
        if(s[i]!=s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

void form_palindromes(string &A, vector<vector<string>> &set, vector<string> sub_set = {}, int index = 0, string current = ""){
    if(index == A.length()){
        set.push_back(sub_set);
        return;
    }
    for(int i = index; i<A.length(); i++){
        current.push_back(A[i]);
        if(check_palindrome(current)){
            sub_set.push_back(current);
            form_palindromes(A, set, sub_set, i+1);
            sub_set.pop_back();
        }
    }
}

vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> ans;
    form_palindromes(A, ans);
    return ans;
}
