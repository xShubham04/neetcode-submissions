class Solution {
public:
int solve(int index,vector<int>& cost,vector<int>& dp){
    if(index==0 || index==1) return cost[index];
    if(index<0) return 1e9;
    if(dp[index]!=-1) return dp[index];
    int step1=solve(index-1,cost,dp);
    int step2=solve(index-2,cost,dp);
    return dp[index]=cost[index]+min(step1,step2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(solve(n-1,cost,dp),solve(n-2,cost,dp));
    }
};
