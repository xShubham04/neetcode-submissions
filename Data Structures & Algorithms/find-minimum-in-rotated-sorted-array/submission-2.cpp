class Solution {
public:
    int findMin(vector<int> &nums) {
        int start=0;
        int end=nums.size()-1;
        int res=INT_MAX;
        while(start<=end){
            if(nums[start]<nums[end]){
            res=min(res,nums[start]);
            return res;
            }
            int mid=start+(end-start)/2;
            res=min(res,nums[mid]);
            if(nums[mid]>=nums[start]) start=mid+1;
            else end=mid-1;
        }
        return res;
    }
};
