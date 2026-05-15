class Solution {
   public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, reqSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        for (int i = 0; i <= nums.size(); i++) {
            reqSum += i;
        }
        return reqSum - sum;
    }
};
