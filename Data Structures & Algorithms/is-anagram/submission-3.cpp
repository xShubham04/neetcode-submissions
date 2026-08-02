class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        for(char c:s)
        map[c]++;
        for(char c:t){
        map[c]--;
        if(map[c]==0) map.erase(c);
        }
        return map.empty();
    }
};
