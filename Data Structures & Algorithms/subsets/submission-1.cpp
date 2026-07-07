class Solution {
public:
void backtrack(int index,vector<int>& nums,vector<int>& curr,vector<vector<int>>& res){
    if(index==nums.size()){
        res.push_back(curr);
        return;
    }
    curr.push_back(nums[index]);
    backtrack(index+1,nums,curr,res);
    curr.pop_back();
    backtrack(index+1,nums,curr,res);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        backtrack(0,nums,curr,res);
        return res;
    }
};
