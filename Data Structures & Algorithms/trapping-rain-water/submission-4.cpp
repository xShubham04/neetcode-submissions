class Solution {
public:
    int trap(vector<int>& height) {
        int water=0;
        int leftMax=0,rightMax=0;
        int left=0,right=height.size()-1;
        while(left<right){
            leftMax=max(height[left],leftMax);
            rightMax=max(height[right],rightMax);
            if(leftMax<rightMax){
                water+=leftMax-height[left];
                left++;
            }else{
                water+=rightMax-height[right];
                right--;
            }
        }
        return water;
    }
};
