class Solution {
public:
int solve(int index,int start,vector<int>& nums,vector<int>& dp){
    if(index==start) return nums[start];
    if(index<start) return 0;
    if(dp[index]!=-1) return dp[index];
    int take=nums[index]+solve(index-2,start,nums,dp);
    int notTake=solve(index-1,start,nums,dp);
    return dp[index]=max(take,notTake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        return max(solve(n-1,1,nums,dp1),solve(n-2,0,nums,dp2));
    }
};
