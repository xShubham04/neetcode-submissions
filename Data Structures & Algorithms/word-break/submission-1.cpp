class Solution {
public:
bool dfs(string s,vector<string>& wordDict,int i,vector<int>& dp){
    if(i==s.length()) return true;
    if(dp[i]!=-1) return dp[i];
    for(const string& word:wordDict){
        if(i+word.length()<=s.length() && s.substr(i,word.length())==word){
            if(dfs(s,wordDict,i+word.length(),dp)){
                dp[i]=true;
                return true;
            } 
        }
    }
    dp[i]=false;
    return false;
}
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size(),-1);
        return dfs(s,wordDict,0,dp);
    }
};
