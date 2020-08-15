int Solution::solve(vector<int> &A) {
    map<int,int> map_element_index;
    for(int k : A)
        map_element_index[k]+=1;
    int sum = 0;
    for(auto itr = map_element_index.begin();itr!=map_element_index.end();itr++){
        sum+=itr->second;
        if(A.size()-sum == itr->first)
            return 1;
    }
    return -1;
}
