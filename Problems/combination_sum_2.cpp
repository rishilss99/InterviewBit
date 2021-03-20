void form_subsets(vector<int> &A, int B, vector<vector<int>> &set, vector<int> sub_set = {}, int sum = 0, int index = 0){
    if(B==0){
        set.push_back(sub_set);
        return;
    }
    else if(B<0)
        return;
    for(int i = index; i<A.size(); i++){
        if(i>index && A[i-1]==A[i])
            continue;
        sub_set.push_back(A[i]);
        form_subsets(A, B-A[i], set, sub_set, sum, i+1);
        sub_set.pop_back();
        if(B-A[i]<0)
            break;
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end());
    vector<vector<int>> ans;
    form_subsets(A, B, ans);
    return ans;
}
