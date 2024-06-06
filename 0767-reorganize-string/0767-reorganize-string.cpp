class Solution {
public:
    string reorganizeString(string s) {
        
        int map[26]={0};
        
        for(int i=0;i<s.size();i++)
        {
            map[s[i]-'a']++;
        }
        
        int maxi = INT_MIN;
        char max_char;
        for(int i=0;i<26;i++)
        {
            if(map[i]>maxi)
            {
                maxi = map[i];
                max_char= i+'a';
            }
        }
        
        
        int index=0;
        while(maxi>0 && index<s.size())
        {
            s[index]= max_char;
            index+=2;
            maxi--;
        }
        
        if(maxi!=0) return "";
        
        map[max_char-'a']=0;
        
        for(int i=0;i<26;i++)
        {
            while(map[i]>0)
            {
               index = index>=s.size()? 1:index;
                s[index]= i+'a';
                map[i]--;
                index+=2;
            }
        }
        
        return s;
        
    }
};