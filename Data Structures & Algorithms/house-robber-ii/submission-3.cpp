class Solution {
public:
    int backtrack(int index, int start, vector<int>& nums, vector<int>& dp) {
        if (index < start) return 0;
        if (index == start) return nums[start];

        if (dp[index] != -1) return dp[index];

        int take = nums[index] + backtrack(index - 2, start, nums, dp);
        int notTake = backtrack(index - 1, start, nums, dp);

        return dp[index] = max(take, notTake);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];

        vector<int> dp1(n, -1);
        vector<int> dp2(n, -1);

        int case1 = backtrack(n - 1, 1, nums, dp1);
        int case2 = backtrack(n - 2, 0, nums, dp2);

        return max(case1, case2);
    }
};