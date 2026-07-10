class Solution {
public:
int backtrack(int index,vector<int>& nums,vector<int>& dp){
    if(index==0) return nums[index];
    if(index<0) return 0;
    if(dp[index]!=-1) return dp[index];
    int step1=nums[index]+backtrack(index-2,nums,dp);
    int step2=0+backtrack(index-1,nums,dp);
    return dp[index]=max(step1,step2);
}
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return backtrack(nums.size()-1,nums,dp);
    }
};
