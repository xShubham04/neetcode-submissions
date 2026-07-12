class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int res=nums[0];
        for(int i=0;i<n;i++){
            int ans=1;
            for(int j=i;j<n;j++){
                ans*=nums[j];
                res=max(res,ans);
            }
        }
        return res;
    }
};
