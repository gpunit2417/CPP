//code studio
void addSolution(vector<vector<int> >& ans, vector<vector<int> >& board, int n){
    vector<int> temp;
    for(int i = 0; i<n; i++){
        for(int j=0; j<n; j++){
            temp.push_back[i][j];
        }
    }
    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int> > &board, int n){
    int x = row;
    int y = col;

    //same row check
    while(y>=0){
        if(board[x][y] == 1){
            return false;
        }
        y--;
    }
    x=row;
    y=col;
    //check for diagonal
    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        x--;
        y--;
    }
    x=row;
    y=col;
    //check for diagonal
    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
        }
        x++;
        y--;
    }
    return true;

}
void solve(int col, vector<vector<int> >&ans, vector<vector<int> >&board, int n){
    //base case
    if(col == n){
        addSolution(ans, board, n);
        return;
    }

    //solve a case and rest will be solved by recursion
    for(int i =0; i<n; i++){
        if(isSafe(row, col, board, n)){
            //if is placing queen safe
            board[row][col] = 1;
            solve(col+1, ans, board, n);
            //backtrack
            board[row][col] = 0;
        }
    }
}
//t.c. o(n!)
//s.c o(n*n)

// we can optimise the above program by using hashmap which will store that any particular 
//block is true or false