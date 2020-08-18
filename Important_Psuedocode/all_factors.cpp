vector<int> Solution::allFactors(int A) {
    vector<int> less_than;
    vector<int> greater_than;
    for(int i = 1;i<=sqrt(A);i++){
        if(A%i == 0){
            less_than.push_back(i);
            greater_than.push_back(A/i);
        }
    };
    if(less_than.back() == sqrt(A))
        less_than.pop_back();
    for(auto itr = greater_than.end()-1;itr>=greater_than.begin();itr--)
        less_than.push_back(*itr);
    return less_than;
}
