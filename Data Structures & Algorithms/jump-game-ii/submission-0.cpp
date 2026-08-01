class Solution {
public:
    int solve(int index, vector<int>& nums, vector<int>& dp) {
        if (index >= nums.size() - 1)
            return 0;
        if (dp[index] != -1)
            return dp[index];
        int ans = 1e9;
        for (int jump = 1; jump <= nums[index]; jump++) {
            ans = min(ans, 1 + solve(index + jump, nums, dp));
        }
        return dp[index] = ans;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(0, nums, dp);
    }
};