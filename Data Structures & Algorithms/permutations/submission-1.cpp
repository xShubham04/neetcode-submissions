class Solution {
public:
void backtrack(vector<int>& nums,vector<int>& curr,vector<vector<int>>& res,vector<bool>& visited){
    if(curr.size()==nums.size()){
        res.push_back(curr);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(visited[i]) continue;
        visited[i]=true;
        curr.push_back(nums[i]);
        backtrack(nums,curr,res,visited);
        curr.pop_back();
        visited[i]=false;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        vector<bool> visited(nums.size(),false);
        backtrack(nums,curr,res,visited);
        return res;
    }
};
