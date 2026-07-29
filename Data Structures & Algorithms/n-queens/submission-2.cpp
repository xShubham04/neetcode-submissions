class Solution {
public:
bool isSafe(int row,int col,vector<string>& board,int n){
    int x=row;
    int y=col;
    while(y--){
        if(board[x][y]=='Q') return false;
    }
    x=row;
    y=col;
    while(y>=0 && x>=0){
        if(board[x][y]=='Q') return false;
        x--;
        y--;
    }
    x=row;
    y=col;
    while(y>=0 && x<n){
        if(board[x][y]=='Q') return false;
        x++;
        y--;
    }
    return true;
}
void solve(int col,int n,vector<string>& board,vector<vector<string>>& res){
    if(col==n){
        res.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(isSafe(row,col,board,n)){
            board[row][col]='Q';
            solve(col+1,n,board,res);
            board[row][col]='.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n,string(n,'.'));
        solve(0,n,board,res);
        return res;
    }
};
