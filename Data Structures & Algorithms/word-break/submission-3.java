class Solution {
    boolean dfs(int index, String s, List<String> wordDict, int[] dp) {
        if (index == s.length())
            return true;
        if (dp[index] != -1)
            return dp[index] == 1;
        for (String word : wordDict) {
            if (index + word.length() <= s.length()
                    && s.substring(index, index + word.length()).equals(word)) {

                if (dfs(index + word.length(), s, wordDict, dp)) {
                    dp[index] = 1;
                    return true;
                }
            }
        }
        dp[index] = 0;
        return false;
    }
    public boolean wordBreak(String s, List<String> wordDict) {
        int[] dp = new int[s.length()];
        Arrays.fill(dp, -1);
        return dfs(0, s, wordDict, dp);
    }
}