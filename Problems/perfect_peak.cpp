int Solution::perfectPeak(vector<int> &A) {
    if(A.size()<2)
        return 0;
    vector<int> left_max = {A[0]};
    vector<int> right_min = {A[A.size()-1]};
    int max = A[0];
    int min = A[A.size()-1];
    for(int k = 1; k<A.size(); k++){
        left_max.push_back(max);
        max = A[k]>max?A[k]:max;
    }
    // for(int j : left_max)
    //     cout<<j<<endl;
    for(int i = A.size()-2; i>=0; i--){
        right_min.push_back(min);
        min = A[i]<min?A[i]:min;
    }
    reverse(right_min.begin(),right_min.end());
    // for(int j : right_min)
    //     cout<<j<<endl;
    for(int j = 1;j<A.size()-1;j++){
        if(A[j]>left_max[j] && A[j]<right_min[j])
            return 1;
    }
    return 0;
}
