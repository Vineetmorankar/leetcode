class Solution {
public:
    string decodeMessage(string key, string message) {
        
        char map[280] = {0};
        int start = 'a';
        
        for( auto ch: key)
        {
            if(ch!=' ' && map[ch]==0)
            {
                map[ch]=start;
                start++;
            }
        }
        
        string ans;
        
        for(auto ch: message)
        {
            if(ch==' ')
            {
                ans.push_back(' ');
            }
            else
            {
                char dec = map[ch];
                ans.push_back(dec);
            }
        }
        
        return ans;
        
    }
};