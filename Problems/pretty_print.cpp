vector<vector<int> > Solution::prettyPrint(int A) {
    if(A == 0){
        vector<vector<int>> k;
        return k;
    }
    vector<vector<int>> result(2*A-1,vector<int> (2*A-1));
    int min = 0;
    int max = 2*A-2;
    while(min<=max){
        for(int i = min;i<=max;i++){
            result[i][min] = A;
            result[i][max] = A;
            result[min][i] = A;
            result[max][i] = A;
        }
        A--;
        min++;
        max--;
    }
    return result;
}
