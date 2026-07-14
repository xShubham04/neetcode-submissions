class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater <pair<int,int>>> pq;
        for(int n:nums) map[n]++;
        for(auto& p:map){
            pq.push({p.second,p.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
