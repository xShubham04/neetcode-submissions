class Solution {
public:
void solve(int index,vector<int>& curr,vector<vector<int>>& res,vector<int>& nums,int target){
    if(index==nums.size()){
        if(target==0)
        res.push_back(curr);
        return;
    }
    if(nums[index]<=target){
        curr.push_back(nums[index]);
        solve(index,curr,res,nums,target-nums[index]);
        curr.pop_back();
    }
    solve(index+1,curr,res,nums,target);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        solve(0,curr,res,nums,target);
        return res;
    }
};
