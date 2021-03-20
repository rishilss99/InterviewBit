void form_subsets(vector<int> &A, int B, vector<vector<int>> &set, vector<int> sub_set = {}, int sum = 0, int start = 0){
    if(sum == B){
        set.push_back(sub_set);
        return;
    }
    else if(sum > B)
        return;
    for(int i = start; i<A.size(); i++){
        sum+=A[i];
        sub_set.push_back(A[i]);
        form_subsets(A, B, set, sub_set, sum, i);
        sum-=A[i];
        sub_set.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int i = 1;
    int curr = A[0];
    int j = 1;
    while(j<A.size()){
        if(A[j]==curr)
            j++;
        else if(A[j]!=curr){
            curr=A[j];
            A[i]=A[j];
            i++;
        }
    }
    A.resize(i);
    vector<vector<int>> ans;
    form_subsets(A, B, ans);
    return ans;
}
