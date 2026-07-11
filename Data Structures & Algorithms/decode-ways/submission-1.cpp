class Solution {
public:
int backtrack(int index,string s,vector<int>& dp){
    if(index==s.size()) return 1;
    if(s[index]=='0') return 0;
    if(dp[index]!=-1) return dp[index];
    int res=backtrack(index+1,s,dp);
    if(index<s.size()-1){
        if(s[index]=='1' || (s[index]=='2' && s[index+1]<'7'))
        res+=backtrack(index+2,s,dp);
    }
    return dp[index]=res;
}
    int numDecodings(string s) {
        vector<int> dp(s.size(),-1);
        return backtrack(0,s,dp);
    }
};
