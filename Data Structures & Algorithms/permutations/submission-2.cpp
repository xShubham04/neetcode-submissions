class Solution {
public:
void solve(vector<int>& curr,vector<vector<int>>& res,vector<int>& nums,vector<bool>& visited){
    if(curr.size()==nums.size()){
        res.push_back(curr);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(visited[i]) continue;
        visited[i]=true;
        curr.push_back(nums[i]);
        solve(curr,res,nums,visited);
        curr.pop_back();
        visited[i]=false;
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> res;
        vector<bool> visited(nums.size(),false);
        solve(curr,res,nums,visited);
        return res;
    }
};
