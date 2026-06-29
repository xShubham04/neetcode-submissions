class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area = 0;
        stack<pair<int,int>> st;
        for(int i=0;i<heights.size();i++){
            int start=i;
            while(!st.empty() && st.top().second > heights[i]){
                pair<int,int> top = st.top();
                st.pop();
                area = max(area, top.second * (i-top.first));
                start = top.first;
            }
            st.push({start,heights[i]});
        }
        while(!st.empty()){
            pair<int,int> top = st.top();
            st.pop();
            area = max(area,top.second * (int)(heights.size()-top.first));
        }
        return area;
    }
};