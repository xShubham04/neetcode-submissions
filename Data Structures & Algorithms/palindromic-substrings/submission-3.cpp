class Solution {
public:
int count(string s,int left,int right){
    int ans=0;
    while(left>=0 && right<s.size() && s[left]==s[right]){
        left--;
        right++;
        ans++;
    }
    return ans;
}
    int countSubstrings(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            res+=count(s,i,i);
            res+=count(s,i,i+1);
        }
        return res;
    }
};
