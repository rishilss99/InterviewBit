void form_subsets(vector<vector<int>> &set, int B, vector<int> sub_set = {}, int index = 1){
    if(sub_set.size()==B){
        set.push_back(sub_set);
        return;
    }
    for(int i = index; i<=B; i++){
        sub_set.push_back(i);
        form_subsets(set, B, sub_set, i+1);
        sub_set.pop_back();
    }
}

vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int>> ans;
    if(B==0){
        ans.push_back({});
        return ans;
    }
    form_subsets(ans, B);
    return ans;
}
