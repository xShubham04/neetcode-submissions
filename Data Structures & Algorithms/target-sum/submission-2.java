class Solution {
    int solve(int index,int sum,int target,int[] nums,int[][] dp){
        if(index==nums.length){
            if(sum==target) return 1;
            return 0;
        }
        if(dp[index][sum+1000]!=-1) return dp[index][sum+1000];
        int add=solve(index+1,sum+nums[index],target,nums,dp);
        int subtract=solve(index+1,sum-nums[index],target,nums,dp);
        return dp[index][sum+1000]=add+subtract;
    }
    public int findTargetSumWays(int[] nums, int target) {
        int[][] dp=new int[nums.length][2001];
        for(int i=0;i<nums.length;i++) Arrays.fill(dp[i],-1);
        return solve(0,0,target,nums,dp);
    }
}
