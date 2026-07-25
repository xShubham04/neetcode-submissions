class Solution {
public:
    bool isValid(string s) {
        int index=0;
        stack<char> st;
        while(index<s.size()){
            if(s[index]=='(' || s[index]=='{' || s[index]=='[')
            st.push(s[index]);
            else if((s[index]==')' && !st.empty() && st.top()=='(') || (s[index]=='}' && !st.empty() && st.top()=='{') || (s[index]==']' && !st.empty() && st.top()=='['))
            st.pop();
            else return false;
            index++;
        }
        return st.empty();
    }
};
