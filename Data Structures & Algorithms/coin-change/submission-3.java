class Solution {

    int solve(int index, int[] coins, int amount, int[][] dp) {

        if (amount == 0)
            return 0;

        if (amount < 0 || index == coins.length)
            return 1_000_000_000;

        if (dp[index][amount] != -1)
            return dp[index][amount];

        int take = 1_000_000_000;

        if (coins[index] <= amount) {
            take = 1 + solve(index, coins, amount - coins[index], dp);
        }

        int notTake = solve(index + 1, coins, amount, dp);

        return dp[index][amount] = Math.min(take, notTake);
    }

    public int coinChange(int[] coins, int amount) {

        int[][] dp = new int[coins.length][amount + 1];

        for (int[] row : dp) {
            Arrays.fill(row, -1);
        }

        int ans = solve(0, coins, amount, dp);

        return ans == 1_000_000_000 ? -1 : ans;
    }
}