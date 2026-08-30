class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> map;
        for(char c:s1) map[c]++;
        unordered_map<char,int> required;
        for(int i=0;i<s1.size();i++) required[s2[i]]++;
        if(map==required) return true;
        int left=0;
        for(int right=s1.size();right<s2.size();right++){
            required[s2[right]]++;
            required[s2[left]]--;
            if(required[s2[left]]==0) required.erase(s2[left]);
            if(map==required) return true;
            left++;
        }
        return false;
    }
};
