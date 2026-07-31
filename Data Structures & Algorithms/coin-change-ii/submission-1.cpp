class Solution {
public:
int solve(int index,int amount,vector<int>& coins,vector<vector<int>>& dp){
    if(index==coins.size()) 
    return amount==0;
    if(dp[index][amount]!=-1) return dp[index][amount];
    int take=0;
    if(coins[index]<=amount){
        take=solve(index,amount-coins[index],coins,dp);
    }
    int notTake=solve(index+1,amount,coins,dp);
    return dp[index][amount]=take+notTake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return solve(0,amount,coins,dp);
    }
};
