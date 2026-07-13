class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        sort(intervals.begin(),intervals.end(),[](auto& a,auto&b){
            return a[1]<b[1];  
        });
        int ans=0;
        int lastEnd=intervals[0][1];
        ans++;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=lastEnd){
                ans++;
                lastEnd=intervals[i][1];
            }
        }
        return intervals.size()-ans;
    }
};
