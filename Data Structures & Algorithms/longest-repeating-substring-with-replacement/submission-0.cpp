class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        for(int i=0;i<s.size();i++){
            int maxf=0;
            unordered_map<char,int> map;
            for(int j=i;j<s.size();j++){
                map[s[j]]++;
                maxf=max(maxf,map[s[j]]);
                if((j-i+1)-maxf<=k){
                    res=max(res,j-i+1);
                }
            }
        }
        return res;
    }
};
