class Solution {
public:
int backtrack(int index,vector<int>& cost,vector<int>& dp){
    if(index==0 || index==1) return cost[index];
    if(index<0) return INT_MAX;
    if(dp[index]!=-1) return dp[index];
    int step1=backtrack(index-1,cost,dp);
    int step2=backtrack(index-2,cost,dp);
    return dp[index]=cost[index]+min(step1,step2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(backtrack(cost.size()-1,cost,dp),backtrack(cost.size()-2,cost,dp));
    }
};
