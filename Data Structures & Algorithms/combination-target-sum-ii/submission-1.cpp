class Solution {
public:
void backtrack(int index,vector<int>& curr,vector<vector<int>>&  res,vector<int>& candidates, int target){
    if(index==candidates.size()){
        if(target==0) res.push_back(curr);
        return;
    }
    if(candidates[index]<=target){
        curr.push_back(candidates[index]);
        backtrack(index+1,curr,res,candidates,target-candidates[index]);
        curr.pop_back();
    }
    while(index+1<candidates.size() && candidates[index]==candidates[index+1]) index++;
    backtrack(index+1,curr,res,candidates,target);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> curr;
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        backtrack(0,curr,res,candidates,target);
        return res;
    }
};
