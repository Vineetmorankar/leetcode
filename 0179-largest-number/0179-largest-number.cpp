class Solution {
public:
    
    static bool comp(string a, string b)
    {
        string t1 = a+b;
        string t2 = b+a;
        
        return t1>t2;
    }
    
    string largestNumber(vector<int>& nums) {
        
        vector<string> st;
        
        for(auto num:nums)
        {
            st.push_back(to_string(num));
        }
        
        sort(st.begin(),st.end(), comp);
        
        string ans = "";
        
        if(st[0]=="0") return "0";
        
        for(auto s:st)
        {
            ans+=s;
        }
        
        return ans;
    
    }
};