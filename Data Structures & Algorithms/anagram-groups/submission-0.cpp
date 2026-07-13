class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(auto& p: strs){
            vector<int> count(26,0);
            for(char c:p)
            count[c-'a']++;
            string key=to_string(count[0]);
            for(int i=1;i<26;i++){
                key+=","+to_string(count[i]);
            }
            map[key].push_back(p);      
        }
        vector<vector<string>> ans;
        for(auto&p : map){
            ans.push_back(p.second);
        }
        return ans;
    }
};
