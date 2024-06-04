class Solution {
public:
void normalize(string &s)
    {
        char map[280] = {0};
        char start = 'a';
        
        for(auto ch: s)
        {
            if(map[ch]==0)
            {
                map[ch] = start;
                start++;
            }
            
        }
        
        for(int i=0;i<s.size();i++)
        {
            s[i] = map[s[i]];
        }
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        
        normalize(pattern);
        
        for(int i=0;i<words.size();i++)
        {
            string strans = words[i];
            string str = words[i];
            
            normalize(str);
            
            if(str==pattern)
            {
                ans.push_back(strans);
            }
        }
        
        return ans;
    }
};