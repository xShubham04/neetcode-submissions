class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        if(nums.size()==set.size()) return false;
        return true; 
    }
};