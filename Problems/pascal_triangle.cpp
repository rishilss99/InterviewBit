void add_elements(vector<vector<int>> &result){
    vector<int> arr;
    for(int i = 0;i<result.back().size();i++){
        if(i==0)
            arr.push_back(1);
        else
            arr.push_back(result.back()[i-1] + result.back()[i]);
    }
    arr.push_back(1);
    result.push_back(arr);
}

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> result;
    if(A == 0)
        return result;
    result.push_back({1});
    for(int i = 1;i<A;i++)
        add_elements(result);
    return result;
}
