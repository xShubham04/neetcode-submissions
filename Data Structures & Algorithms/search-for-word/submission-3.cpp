class Solution {
public:
bool backtrack(int row, int col, int count,string& word,vector<vector<char>>& board,vector<vector<bool>>& visited){
    if(count==word.size()) return true;
    int m=board.size();
    int n=board[0].size();
    if(row<0 || col<0 || row>=m || col>=n) return false;
    if(visited[row][col]) return false;
    if(board[row][col]!=word[count]) return false;
    visited[row][col]=true;
    bool found=backtrack(row+1,col,count+1,word,board,visited) || backtrack(row-1,col,count+1,word,board,visited) || backtrack(row,col+1,count+1,word,board,visited) || backtrack(row,col-1,count+1,word,board,visited);
    visited[row][col]=false;
    return found;
}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(backtrack(i,j,0,word,board,visited)) return true;
            }
        }
        return false;
    }
};
