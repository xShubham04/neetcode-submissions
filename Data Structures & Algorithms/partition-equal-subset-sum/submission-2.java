class Solution {

    boolean solve(int index, int target, int[] nums, int[][] dp) {

        if (index == nums.length) {
            return target == 0;
        }

        if (dp[index][target] != -1) {
            return dp[index][target] == 1;
        }

        boolean take = false;

        if (nums[index] <= target) {
            take = solve(index + 1, target - nums[index], nums, dp);
        }

        boolean skip = solve(index + 1, target, nums, dp);

        dp[index][target] = (take || skip) ? 1 : 0;

        return take || skip;
    }

    public boolean canPartition(int[] nums) {

        int sum = 0;

        for (int n : nums)
            sum += n;

        if (sum % 2 == 1)
            return false;

        int target = sum / 2;

        int[][] dp = new int[nums.length][target + 1];

        for (int i = 0; i < nums.length; i++) {
            Arrays.fill(dp[i], -1);
        }

        return solve(0, target, nums, dp);
    }
}