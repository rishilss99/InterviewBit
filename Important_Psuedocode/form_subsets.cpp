void form_subsets(vector<int> &A, vector<vector<int>> &set, vector<int> &sub_set, int start = 0){
    for(int i = start; i<A.size(); i++){
        sub_set.push_back(A[i]);
        set.push_back(sub_set);
        form_subsets(A, set, sub_set, i+1);
        sub_set.pop_back();
    }
    return;
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    vector<int> sub_set = {};
    ans.push_back(sub_set);
    form_subsets(A, ans, sub_set);
    return ans;
}
