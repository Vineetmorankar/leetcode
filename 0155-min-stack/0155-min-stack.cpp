class MinStack {
public:
    vector<pair<int,int>> st;
    
    MinStack() {
        
    }
    
    void push(int val) {
        pair<int,int> p;
        if(st.empty())
        {
            p.first = val;
            p.second = val;
            st.push_back(p);
        }
        else
        {
            p.first = val;
            pair<int,int>getback = st.back();
            p.second = min(val, getback.second);
            st.push_back(p);
        }
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        pair<int,int>getback = st.back();
        return getback.first;
    }
    
    int getMin() {
        pair<int,int>getback = st.back();
        return getback.second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */