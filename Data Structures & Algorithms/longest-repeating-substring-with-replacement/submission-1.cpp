class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        unordered_set<char> set(s.begin(),s.end());
        for(char c:set){
            int count=0,left=0;
            for(int right=0;right<s.size();right++){
                if(s[right]==c) count++;
            while((right-left+1)-count>k){
                if(s[left]==c) count--;
                left++;
                }
            res=max(res,right-left+1);
            }
        }
        return res;
    }
};
