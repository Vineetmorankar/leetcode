class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        
        for(auto ch: s)
        {
            if(st.empty()) st.push(ch);
            else
            {
                char top = st.top();
                if((top=='A' && ch=='B') || (top=='C' &&  ch=='D'))
                {
                    st.pop();
                }
                else
                {
                   st.push(ch);
                }
            }
        }
                   
        return st.size();
    }
};