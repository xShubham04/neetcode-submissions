class Solution {
public:
int solve(int index,int sum,int target,vector<int>& nums){
    if(index==nums.size())
    return sum==target;
    int add=solve(index+1,sum+nums[index],target,nums);
    int subtract=solve(index+1,sum-nums[index],target,nums);
    return add + subtract;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0,0,target,nums);
    }
};
