class Solution {
public:
void backtrack(int index,vector<int>& curr,vector<vector<int>>& res,vector<int>& nums,int target){
    if(index==nums.size()){
        if(target==0) res.push_back(curr);
        return;
    }
    if(nums[index]<=target){
        curr.push_back(nums[index]);
        backtrack(index,curr,res,nums,target-nums[index]);
        curr.pop_back();
    }
    backtrack(index+1,curr,res,nums,target);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        vector<vector<int>> res;
        backtrack(0,curr,res,nums,target);
        return res;
    }
};
