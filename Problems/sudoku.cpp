bool is_valid(vector<vector<char>> &A, int row, int col, char num){
    for(int i = 0; i<A.size(); i++){
        // cout<<A[i][col]<<" "<<A[row][i]<<endl;
        if(A[i][col]==num)
            return false;
        if(A[row][i]==num)
            return false;
    }
    int start_row = 3 * (row/3);
    int start_col = 3 * (col/3);
    for(int k = 0; k<3; k++){
        for(int l = 0; l<3; l++){
            if(A[start_row+k][start_col+l] == num)
                return false;
        }
    }
    return true;
}

void solve_sudoku(vector<vector<char>> &ans, vector<vector<char>> &A, int row = 0, int col = 0){
    if(row==A.size()){
        ans = A;
        return;
    }
    // cout<<A[row][col]<<endl;
    if(A[row][col]!='.')
        solve_sudoku(ans, A, col+1<A.size()?row:row+1, col+1<A.size()?col+1:0);
    else{
        for(int i = 1; i<=9; i++){
            if(is_valid(A,row,col,(i+'0'))){
                // cout<<i<<endl;
                A[row][col] = i+'0';
                solve_sudoku(ans, A, col+1<A.size()?row:row+1, col+1<A.size()?col+1:0);
                A[row][col] = '.';
            }
                
        }
    }
    
}

void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<char>> ans;
    solve_sudoku(ans, A);
    A = ans;
}
