class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pair;
        stack<double> st;
        for(int i=0;i<position.size();i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.rbegin(),pair.rend());
        for(auto& p: pair){
            double time=(double)(target-p.first)/p.second;
            if(st.empty() || time>st.top())
            st.push(time);
        }
        return st.size();
    }
};
