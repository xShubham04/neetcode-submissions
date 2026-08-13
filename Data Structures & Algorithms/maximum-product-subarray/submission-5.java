class Solution {
    public int maxProduct(int[] nums) {
        int ans=nums[0];
        int maxEndingHere=1;
        int minEndingHere=1;
        for(int n:nums){
            int previousMax=maxEndingHere;
            maxEndingHere=Math.max(n,Math.max(previousMax*n,minEndingHere*n));
            minEndingHere=Math.min(n,Math.min(previousMax*n,minEndingHere*n));
            ans=Math.max(ans,maxEndingHere);
        }
        return ans;
    }
}
