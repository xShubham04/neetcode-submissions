class Solution {
public:
int backtrack(int index,vector<int>& coins, int amount,vector<vector<int>>& dp){
    if(amount==0) return 0;
    if(amount<0 || index==coins.size()) return INT_MAX;
    int take=INT_MAX;
    int res=backtrack(index,coins,amount-coins[index],dp);
    if(res!=INT_MAX) take=1+res;
    int notTake=backtrack(index+1,coins,amount,dp);
    return dp[index][amount]=min(take,notTake);
}
    int coinChange(vector<int>& coins, int amount) {
    vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
    int ans=backtrack(0,coins,amount,dp);
    return ans==INT_MAX?-1:ans;
    }
};
