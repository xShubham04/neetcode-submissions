class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int num:nums){
            int index=abs(num)-1;
            if(nums[index]<0) return abs(num);
            nums[index]=-nums[index];
        }
        return -1;
    }
};
