class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        for(auto& p:intervals){
            if(res.empty() || res.back()[1]<p[0]) res.push_back(p);
            else res.back()[1]=max(res.back()[1],p[1]);
        }
        return res;
    }
};
