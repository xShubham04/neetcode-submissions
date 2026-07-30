class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        int maxEndinghere=1;
        int minEndinghere=1;
        for(int num:nums){
            int previousMax=maxEndinghere;
            maxEndinghere=max({num,previousMax*num,minEndinghere*num});
            minEndinghere=min({num,previousMax*num,minEndinghere*num});
            ans=max(ans,maxEndinghere);
        }
        return ans;
    }
};
