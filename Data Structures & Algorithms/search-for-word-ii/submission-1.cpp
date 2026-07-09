class Solution {
public:
    bool search(int row, int col, int count, string &word,
                vector<vector<char>> &board,
                vector<vector<bool>> &visited) {

        if (count == word.size())
            return true;

        int m = board.size();
        int n = board[0].size();

        if (row < 0 || col < 0 || row >= m || col >= n)
            return false;

        if (visited[row][col])
            return false;

        if (board[row][col] != word[count])
            return false;

        visited[row][col] = true;

        bool found =
            search(row + 1, col, count + 1, word, board, visited) ||
            search(row - 1, col, count + 1, word, board, visited) ||
            search(row, col + 1, count + 1, word, board, visited) ||
            search(row, col - 1, count + 1, word, board, visited);

        visited[row][col] = false;

        return found;
    }

    vector<string> findWords(vector<vector<char>> &board,
                             vector<string> &words) {

        vector<string> res;

        int m = board.size();
        int n = board[0].size();

        for (string &word : words) {

            vector<vector<bool>> visited(m, vector<bool>(n, false));

            bool found = false;

            for (int i = 0; i < m && !found; i++) {
                for (int j = 0; j < n && !found; j++) {

                    if (search(i, j, 0, word, board, visited)) {
                        res.push_back(word);
                        found = true;
                    }
                }
            }
        }

        return res;
    }
};