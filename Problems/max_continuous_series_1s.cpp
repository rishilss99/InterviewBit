vector<int> Solution::maxone(vector<int> &A, int B) {
    int left_index = 0;
    int right_index = 0;
    int length = INT_MIN;
    int i = 0;
    int j = 0;
    int count = 0;
    while(j<A.size()){
        if(A[j]==0)
            count++;
        if(count<=B)
            j++;
        else{
            if(j-i>length){
                length = j-i;
                left_index = i;
                right_index = j;
            }
            if(A[i]==0)
                count--;
            i++;
            j++;
        }
    }
    if(j-i>length){
            length = j-i;
            left_index = i;
            right_index = j;
    }
    vector<int> ans;
    for(;left_index<right_index;left_index++)
        ans.push_back(left_index);
    return ans;
}
