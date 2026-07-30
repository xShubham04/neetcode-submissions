class Solution {
public:
bool dfs(int index,string s,vector<string>& wordDict,vector<int>& dp){
    if(index==s.size()) return true;
    if(dp[index]!=-1) return dp[index];
    for(string word:wordDict){
        if(index+word.size()<=s.length() && s.substr(index,word.size())==word)
        if(dfs(index+word.size(),s,wordDict,dp)){
            dp[index]=true;
            return true;
        }
    }
    dp[index]=false;
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size(),-1);
        return dfs(0,s,wordDict,dp);
    }
};
