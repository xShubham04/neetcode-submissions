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
    while(index+1<nums.size() && nums[index]==nums[index+1]) index++;
    backtrack(index+1,nums,curr,res);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        backtrack(0,nums,curr,res);
        return res;
    }
};
