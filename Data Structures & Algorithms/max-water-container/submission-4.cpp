class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int ans=0;
        for(int i=0;i<heights.size();i++){
            int area=min(heights[left],heights[right])*(right-left);
            ans=max(ans,area);
            if(heights[left]<heights[right]) left++;
            else right--;
        }
        return ans;
    }
};
