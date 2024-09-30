class CustomStack {
public:
    int top=-1;
    vector<int> st;
    CustomStack(int maxSize) {
       st = vector<int>(maxSize,-1);
    }
    
    void push(int x) {
        
        if(top+1<st.size())
        {
            top++;
            st[top]=x;
        }
    }
    
    int pop() {
        top;
        if(top<0) return  -1;
        int result = st[top];   
        top--;
        return result;
        
    }
    
    void increment(int k, int val) {
        int limit = min(k, top+1); 
        for (int i = 0; i < limit; i++) {
            st[i] += val;
        }

    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */