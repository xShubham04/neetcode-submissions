class Solution {
public:
    bool isPalindrome(string s, int start,int end) {
        while (start <= end) {
            if (s[start] != s[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
    void backtrack(int index, string s, vector<string>& curr,
                   vector<vector<string>>& res) {
        if (index == s.size()) {
            res.push_back(curr);
            return;
        }
        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                curr.push_back(s.substr(index, i - index+1));
                backtrack(i + 1, s, curr, res);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector < vector<string>> res;
        vector<string> curr;
        backtrack(0, s, curr, res);
        return res;
    }
};