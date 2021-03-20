void form_subsets(vector<int> &A, vector<vector<int>> &set, vector<int> sub_set = {}, int index = 0){
    for(int i = index; i<A.size(); i++){
        if(i>index && A[i] == A[i-1])
            continue;
        sub_set.push_back(A[i]);
        set.push_back(sub_set);
        form_subsets(A, set, sub_set, i+1);
        sub_set.pop_back();
    }
}

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int>> ans;
    ans.push_back({});
    form_subsets(A, ans);
    return ans;
}
