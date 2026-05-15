class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
        int d=target-nums[i];
        if(map.count(d)) return {map[d],i};
        map[nums[i]]=i;
        }
        return {};
    }
};
