class Solution {
public:
    void generate(int open, int close, int n, string curr, vector<string>& res) {
        if (curr.size() == 2 * n) {
            res.push_back(curr);
            return;
        }
        if (open < n)
            generate(open + 1, close, n, curr + '(', res);
        if (close < open)
            generate(open, close + 1, n, curr + ')', res);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        generate(0, 0, n, "", res);
        return res;
    }
};