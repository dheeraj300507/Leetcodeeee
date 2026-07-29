class MinStack {
public:
stack<int> st;
stack<int> mn;
    
    MinStack() {
    }
    
    void push(int value) {
        st.push(value);
        if(mn.empty())mn.push(value);
        
        else if(st.top()<=mn.top()){
            mn.push(value);
        }
    }
    
    void pop() {
        if(st.top()==mn.top()){
            st.pop();
            mn.pop();
        }
        else{
            st.pop();
        }
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
       return  mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */