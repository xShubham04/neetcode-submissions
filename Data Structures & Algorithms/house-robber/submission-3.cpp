class Solution {
public:
int solve(int index,vector<int>& dp,vector<int>& nums){
    if(index==0) return nums[index];
    if(index<0) return 0;
    if(dp[index]!=-1) return dp[index];
    int cost1=nums[index]+solve(index-2,dp,nums);
    int cost2=0+solve(index-1,dp,nums);
    return dp[index]=max(cost1,cost2);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return solve(n-1,dp,nums);
    }
};