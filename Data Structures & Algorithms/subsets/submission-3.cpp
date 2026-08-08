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
    solve(index+1,curr,res,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        solve(0,curr,res,nums);
        return res;
    }
};
