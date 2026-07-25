class MinStack {
public:
stack<int> s,st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty() || val<=st.top()) st.push(val);
        s.push(val);
    }
    
    void pop() {
        if(st.top()==s.top()) st.pop();
        s.pop();
    }
    
    int top() {
        return s.empty() ? -1 : s.top();
    }
    
    int getMin() {
        return st.empty() ? -1 : st.top();
    }
};
