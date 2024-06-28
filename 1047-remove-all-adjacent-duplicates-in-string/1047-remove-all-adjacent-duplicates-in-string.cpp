class Solution {
public:
    string removeDuplicates(string s) {
//         int n = s.size();
//         string ans;
        
//         for(int i=0;i<n;i++)
//         {
//             if(ans.size()>0 && ans.back()==s[i])
//             {
//                 ans.pop_back();
//             }
//             else
//             {
//                 ans.push_back(s[i]);
//             }
//         }
        
//         return ans;
        int n = s.size();
        stack<char> st;
        if(n==0) return "";
        st.push(s[0]);
        
        for(int i=1;i<n;i++)
        {
            if(!st.empty() && st.top()==s[i])
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        
        string ans = "";
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};