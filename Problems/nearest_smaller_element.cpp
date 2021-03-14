vector<int> Solution::prevSmaller(vector<int> &A) {
    vector<int> ans(A.size(),-1);
    stack<int> num;
    num.push(A[0]);
    int i = 1;
    while(i<A.size()){
        if(num.empty()){
            num.push(A[i]);
            i++;
        }
        else if(A[i]>num.top()){
            ans[i]=num.top();
            num.push(A[i]);
            i++;
        }
        else if(A[i]<=num.top())
            num.pop();
    }
    return ans;
}
