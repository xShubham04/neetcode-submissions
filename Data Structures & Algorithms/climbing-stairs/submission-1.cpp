class Solution {
public:
int backtrack(int index,vector<int>& dp){
    if(index==0) return 1;
    if(index<0) return 0;
    if(dp[index]!=-1) return dp[index];
    int step1=backtrack(index-1,dp);
    int step2=backtrack(index-2,dp);
    return dp[index]=step1+step2;
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return backtrack(n,dp);
    }
};
