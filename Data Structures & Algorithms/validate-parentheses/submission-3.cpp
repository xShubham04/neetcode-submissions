class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int index=0;
        while(index<s.size()){
            if(s[index]=='(' || s[index]=='{' || s[index]=='[')
            st.push(s[index]);
            else if((s[index]==')' && !st.empty() && st.top()=='(')  ||
            (s[index]=='}' && !st.empty() && st.top()=='{') ||
            (s[index]==']' && !st.empty() && st.top()=='['))
            st.pop();
            else 
            return false;
            index++;
        }
        if(st.empty()) return true;
        return false;
    }
};
