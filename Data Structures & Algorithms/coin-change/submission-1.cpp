class Solution {
public:
int solve(int index,vector<int>& coins,int amount,vector<vector<int>>& dp){
    if(amount==0) return 0;
    if(amount<0 || index==coins.size()) return 1e9;
    int take=1e9;
    if(dp[index][amount]!=-1) return dp[index][amount];
    if(coins[index]<=amount){
        take=1+solve(index,coins,amount-coins[index],dp);
    }
    int notTake=solve(index+1,coins,amount,dp);
    return dp[index][amount]=min(take,notTake);
}
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int ans= solve(0,coins,amount,dp);
        return ans==1e9?-1:ans;
    }
};
