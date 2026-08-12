class Solution {
public:
string expand(int left,int right,string s){
    while(left>=0 && right<s.size() && s[left]==s[right]){
        left--;
        right++;
    }
    return s.substr(left+1,right-left-1);
}
    string longestPalindrome(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            string even=expand(i,i+1,s);
            string odd=expand(i,i,s);
            if(even.size()>ans.size()) ans=even;
            if(odd.size()>ans.size()) ans=odd;
        }
        return ans;
    }
};
