void form_permutations(vector<int> &set, int A, int index = 1, int num = 0, bool tracker = false){
    if(index==A){
        set.push_back(num);
        return;
    }
    if(!tracker){
        form_permutations(set, A, index+1, num, !tracker);
        num = num | (1<<index);
        form_permutations(set, A, index+1, num, tracker);
    }
    else{
        num = num | (1<<index);
        form_permutations(set, A, index+1, num, tracker);
        num = num ^ (1<<index);
        form_permutations(set, A, index+1, num, !tracker);
    }
}

vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> ans;
    form_permutations(ans, A);
    for(int k : ans)
        cout<<k<<" ";
    return ans;
}
