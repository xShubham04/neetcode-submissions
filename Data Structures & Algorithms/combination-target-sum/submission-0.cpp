class Solution {
public:
void backtrack(int index,int sum,vector<int>& nums, int target,vector<int>& curr,vector<vector<int>>&res){
    if(index==nums.size()){
        if(sum==target) res.push_back(curr);
        return;
    }
    if(sum+nums[index]<=target){
        sum+=nums[index];
        curr.push_back(nums[index]);
        backtrack(index,sum,nums,target,curr,res);
        sum-=nums[index];
        curr.pop_back();
    }
    backtrack(index+1,sum,nums,target,curr,res);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        vector<vector<int>> res;
        backtrack(0,0,nums,target,curr,res);
        return res;
    }
};
