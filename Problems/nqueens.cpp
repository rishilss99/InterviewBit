bool check_horizontal(vector<string> &board, int row, int col){
    for(int i = 0; i<board.size(); i++){
        if(i==col)
            continue;
        if(board[row][i]=='Q')
            return true;
    }
    return false;
}

bool check_vertical(vector<string> &board, int row, int col){
    for(int i = 0; i<board.size(); i++){
        if(i==row)
            continue;
        if(board[i][col]=='Q')
            return true;
    }
    return false;
}

bool check_diagonal(vector<string> &board, int row, int col){
    int i = row+1;
    int j = col+1;
    while(i<board.size() && j<board.size()){
        if(board[i][j]=='Q')
            return true;
        i++;
        j++;
    }
    i = row-1;
    j = col+1;
    while(i>=0 && j<board.size()){
        if(board[i][j]=='Q')
            return true;
        i--;
        j++;
    }
    i = row-1;
    j = col-1;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q')
            return true;
        i--;
        j--;
    }
    i = row+1;
    j = col-1;
    while(i<board.size() && j>=0){
        if(board[i][j]=='Q')
            return true;
        i++;
        j--;
    }
    return false;
}

bool check_board(vector<string> &board){
    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board.size(); j++){
            if(board[i][j]=='Q'){
                if(check_horizontal(board, i, j) || check_vertical(board, i, j) || check_diagonal(board, i, j))
                    return false;
            }
        }
    }
    return true;
}

void n_queens(vector<vector<string>> &ans, vector<string> &board, int row = 0){
    if(row==board.size()){
        ans.push_back(board);
        return;
    }
    for(int i = 0; i<board.size(); i++){
        // cout<<row<<" "<<i<<endl;
        board[row][i]='Q';
        if(check_board(board))
            n_queens(ans, board, row+1);
        board[row][i]='.';
    }
}

vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> board;
    for(int i = 0; i<A; i++){
        string temp = "";
        for(int j = 0; j<A; j++){
            temp.push_back('.');
        }
        board.push_back(temp);
    }
    vector<vector<string>> ans;
    n_queens(ans, board);
    return ans;
}
