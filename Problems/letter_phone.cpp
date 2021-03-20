void form_combinations(vector<string> &set, string &A, map<int, string> &phone, string sub_string = "", int index = 0){
    if(sub_string.length()==A.length()){
        set.push_back(sub_string);
        return;
    }
    for(int i = index; i<A.length(); i++){
        for(int k = 0; k<phone[A[i]-'0'].length(); k++){
            sub_string.push_back(phone[A[i]-'0'][k]);
            form_combinations(set, A, phone, sub_string, i+1);
            sub_string.pop_back();
        }
    }
}

vector<string> Solution::letterCombinations(string A) {
    map<int, string> phone;
    phone[0] = "0";
    phone[1] = "1";
    phone[2] = "abc";
    phone[3] = "def";
    phone[4] = "ghi";
    phone[5] = "jkl";
    phone[6] = "mno";
    phone[7] = "pqrs";
    phone[8] = "tuv";
    phone[9] = "wxyz";
    vector<string> ans;
    form_combinations(ans, A, phone);
    return ans;
}
