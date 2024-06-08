class Solution {
public:
    string reverseWords(string s) {
        
        int word = 0;
        int j=0;
        vector<string> ans;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(word==0 && s[i]!=' ')
            {
                j++;
                word = 1;
            }
            else if(word==1 && s[i]==' ')
            {
                ans.push_back(s.substr(i+1, j));
                word=0;
                j=0;
            }
            else if(s[i]!=' ') j++;
        }
        
        if(word==1) ans.push_back(s.substr(0,j));
        
        for(auto ss: ans)
            cout<<ss;
        
        string answer="";
        
        for(int i=0;i<ans.size();i++)
        {
            if(i==ans.size()-1)
                answer+=ans[i];
            else
                answer+=ans[i]+" ";
            
        }
        
        return answer;
    }
};