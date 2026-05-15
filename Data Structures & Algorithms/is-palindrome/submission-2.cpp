class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char c:s){
            if(isalnum(c)) temp+=tolower(c);
        }
        int start=0;
        int end=temp.size()-1;
        while(start<end){
            if(temp[start]!=temp[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
