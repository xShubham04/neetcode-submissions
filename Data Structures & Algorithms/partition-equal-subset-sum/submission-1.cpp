class Solution {
public:
bool dfs(int index,vector<int>& nums,int target,vector<vector<int>>& dp){
    if(index==nums.size()){
        return target==0;
    }
    if(target<0) return false;
    if(dp[index][target]!=-1) return dp[index][target];
    int take=0;
    if(nums[index]<=target){
        take=dfs(index+1,nums,target-nums[index],dp);
    }
    int skip=dfs(index+1,nums,target,dp);
    return dp[index][target] = take || skip;
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        if(sum%2==1) return false;
        int target=sum/2;
        vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        return dfs(0,nums,target,dp);
    }
};
