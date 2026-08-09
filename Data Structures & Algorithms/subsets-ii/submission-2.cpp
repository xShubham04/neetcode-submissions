class Solution {
public:
void solve(int index,vector<int>& curr,vector<vector<int>>& res,vector<int>& nums){
    if(index==nums.size()){
        res.push_back(curr);
        return;
    }
    curr.push_back(nums[index]);
    solve(index+1,curr,res,nums);
    curr.pop_back();
    while(index+1<nums.size() && nums[index]==nums[index+1]) index++;
    solve(index+1,curr,res,nums);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        solve(0,curr,res,nums);
        return res;
    }
};
