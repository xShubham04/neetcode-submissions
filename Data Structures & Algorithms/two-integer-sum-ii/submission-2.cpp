class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<numbers.size();i++){
            int complement=target-numbers[i];
            if(map.count(complement)) return{map[complement],i+1};
            map[numbers[i]]=i+1;
        }
        return {};
    }
};
