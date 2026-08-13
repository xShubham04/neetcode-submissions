class Solution {
    int solve(int index,String s,int[] dp){
        if(index==s.length()) return 1;
        if(s.charAt(index)=='0') return 0;
        if(dp[index]!=-1) return dp[index];
        int res=solve(index+1,s,dp);
        if(index+1<s.length()){
            if(s.charAt(index)=='1' || s.charAt(index)=='2' && s.charAt(index+1)<'7') res+=solve(index+2,s,dp);
        }
        return dp[index]=res;
    }
    public int numDecodings(String s) {
        int[] dp=new int[s.length()];
        Arrays.fill(dp,-1);
        return solve(0,s,dp);
    }
}
