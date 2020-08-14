void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    unordered_set<int> rows;
    unordered_set<int> cols;
    for(int i = 0;i<A.size();i++){
        for(int k = 0;k<A[0].size();k++){
            if(A[i][k] == 0){
                rows.insert(i);
                cols.insert(k);
            }
        }
    }
    for(int i = 0;i<A.size();i++){
        for(int k = 0;k<A[0].size();k++){
            if(rows.count(i) || cols.count(k))
                A[i][k] = 0;
        }
    }
    
}
