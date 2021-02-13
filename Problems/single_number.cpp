int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;
    for(int k: A)
        ans = ans ^ k;
    return ans;
}
