vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int original_square_sum = 0;
    long long int actual_square_sum = ((long)A.size()*((long)A.size() +1) *(2*((long)A.size())+1)) / 6;
    long long int original_sum = 0;
    long long int actual_sum = ((long)A.size()*((long)A.size()+1))/2;
    for(int i = 0;i<A.size();i++){
        original_sum += (long)A[i];
        original_square_sum += (long)A[i]*(long)A[i];
    }
    long long int diff = original_sum - actual_sum;
    long long int sum = (original_square_sum - actual_square_sum) / diff;
    int num1 = (diff+sum) / 2;
    int num2 = sum-num1;
    int greater = num1>num2?num1:num2;
    int smaller = num1>num2?num2:num1;
    vector<int> result;
    result.push_back(diff>0?greater:smaller);
    result.push_back(diff>0?smaller:greater);
    return result;
}
