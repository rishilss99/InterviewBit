vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> arr(A,vector<int> (A));
    int min_row = 0; int max_row = A-1;
    int min_col = 0; int max_col = A-1;
    int num = 1;
    int dir = 0;
    while(max_row>=min_row && max_col>=min_col){
        if(dir == 0){
            for(int i = min_col;i<=max_col;i++){
                arr[min_row][i] = num;
                num++;
            }
            min_row++;
            dir++;
        }
        else if(dir == 1){
            for(int k = min_row;k<=max_row;k++){
                arr[k][max_col] = num;
                num++;
            }
            max_col--;
            dir++;
        }
        else if(dir == 2){
            for(int j = max_col;j>=min_col;j--){
                arr[max_row][j] = num;
                num++;
            }
            max_row--;
            dir++;
        }
        else if(dir == 3){
            for(int h = max_row;h>=min_row;h--){
                arr[h][min_col] = num;
                num++;
            }
            min_col++;
            dir = 0;
        }
    }
    return arr;
}
