class Solution {
public:
int solve(int index,vector<int>& dp){
    if(index==0) return 1;
    if(index<0) return 0;
    if(dp[index]!=-1) return dp[index];
    int step1=solve(index-1,dp);
    int step2=solve(index-2,dp);
    return dp[index]=step1+step2;
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};
