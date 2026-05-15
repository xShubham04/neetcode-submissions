class Solution {
   public:
    vector<vector<int>> res;
    vector<int> curr;
    void backtrack(int start, vector<int>& nums) {
        res.push_back(curr);
        for (int i = start; i < nums.size(); i++) {
            curr.push_back(nums[i]);
            backtrack(i+1,nums);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0,nums);
        return res;
    }
};
