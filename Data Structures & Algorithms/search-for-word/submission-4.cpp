class Solution {
public:
bool solve(int row,int col,int count,string word,vector<vector<char>>& board,vector<vector<bool>>& visited){
    if(count==word.size()) return true;
    int m=board.size();
    int n=board[0].size();
    if(row<0 || row>=m || col<0 || col>=n) return false;
    if(board[row][col]!=word[count]) return false;
    if(visited[row][col]) return false;
    visited[row][col]=true;
    bool found=solve(row+1,col,count+1,word,board,visited) || solve(row,col+1,count+1,word,board,visited) || solve(row-1,col,count+1,word,board,visited) || solve(row,col-1,count+1,word,board,visited);
    visited[row][col]=false;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(solve(i,j,0,word,board,visited)) return true;
            }
        }
        return false;
    }
};
