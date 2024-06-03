class Solution {
public:
    bool checkpal(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
        
    }
    
    bool validPalindrome(string s) {
        
        int i = 0;
        int j = s.size()-1;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                bool ans1 = checkpal(s, i, j-1);
                bool ans2 = checkpal(s, i+1, j);
                
                return ans1||ans2;
            }
        }
        
        return true;
    }
};