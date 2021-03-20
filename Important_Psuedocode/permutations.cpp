void permutations(vector<vector<int>> &set, vector<int> A, int start = 0){
    if(start==A.size()-1){
        set.push_back(A);
        return;
    }
    for(int i = start; i<A.size(); i++){
        swap(A[start],A[i]);
        permutations(set, A, start+1);
        swap(A[start],A[i]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> ans;
    permutations(ans, A);
    return ans;
    
}
