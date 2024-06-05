class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size()!=t.size()) return false;
        
        char map[256] = {0};
        bool ismapped[256] = {0};
        
        for(int i=0;i<s.size();i++)
        {
            if(map[s[i]]==0 && ismapped[t[i]]==0)
            {
                 map[s[i]] = t[i];
                 ismapped[t[i]]=true;
            } 
            else if(map[s[i]]!=t[i])
            {
                return false;
            }      
            
        }
        
        return true;
    }
};