class Solution {
public:
    void expand(int index, string digits, unordered_map<char, list<char>>& map,string curr, vector<string>& res) {
        if(index==digits.size()){
            res.push_back(curr);
            return;
        }
        for(char ch:map[digits[index]]){
            expand(index+1,digits,map,curr+ch,res);
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};
        unordered_map<char, list<char>> map;
        vector<string> res;
        map['2'] = {'a', 'b', 'c'};
        map['3'] = {'d', 'e', 'f'};
        map['4'] = {'g', 'h', 'i'};
        map['5'] = {'j', 'k', 'l'};
        map['6'] = {'m', 'n', 'o'};
        map['7'] = {'p', 'q', 'r', 's'};
        map['8'] = {'t', 'u', 'v'};
        map['9'] = {'w', 'x', 'y', 'z'};
        expand(0, digits, map, "", res);
        return res;
    }
};