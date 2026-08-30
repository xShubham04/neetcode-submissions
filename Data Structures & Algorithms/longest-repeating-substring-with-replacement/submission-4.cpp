class Solution {
public:
    int characterReplacement(string s, int k) {
      unordered_set<char> set(s.begin(),s.end());
      int ans=0;
      for(char c:set){
      int left=0,count=0;
      for(int right=0;right<s.size();right++){
        if(s[right]==c) count++;
        while((right-left+1)-count>k){
            if(s[left]==c) count--;
            left++;
        }
        ans=max(ans,right-left+1);
      }  
      }
      return ans;
    }
};
