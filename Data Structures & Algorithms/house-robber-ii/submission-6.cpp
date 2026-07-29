class Solution {
public:
int solve(int index,int start,vector<int>& dp,vector<int>& nums){
    if(index<start) return 0;
    if(index==start) return nums[start];
    if(dp[index]!=-1) return dp[index];
    int take=nums[index]+solve(index-2,start,dp,nums);
    int notTake=0+solve(index-1,start,dp,nums);
    return dp[index]=max(take,notTake);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        int case1=solve(n-1,1,dp1,nums);
        int case2=solve(n-2,0,dp2,nums);
        return max(case1,case2);
    }
};
