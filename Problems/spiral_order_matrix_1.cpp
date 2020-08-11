vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> result;
    int min_row = 0;
    int max_row = A.size()-1;
    int min_col = 0;
    int max_col = A[0].size()-1;
    int dir = 0;
    while(result.size() != A.size()*A[0].size()){
        if(dir == 0){
            for(int i = min_col;i<=max_col;i++)
                result.push_back(A[min_row][i]);
            min_row++;
        }
        else if(dir == 1){
            for(int j = min_row;j<=max_row;j++)
                result.push_back(A[j][max_col]);
            max_col--;
        }
        else if(dir == 2){
            for(int k = max_col;k>=min_col;k--)
                result.push_back(A[max_row][k]);
            max_row--;
        }
        else if(dir == 3){
            for(int l = max_row;l>=min_row;l--)
                result.push_back(A[l][min_col]);
            min_col++;
        }
        dir = (dir+1)%4;
    }
    return result;
}

