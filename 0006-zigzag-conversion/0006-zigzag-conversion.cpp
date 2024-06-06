class Solution {
public:
    string convert(string s, int numRows) {
        
        if(numRows==1) return s;
        
        vector<string>chart(numRows);
        
        int row=0; int i=0;
        int direction = 1;
        
        
        while(i<s.size())
        {
            if(direction)
            {
                while(row<numRows && i<s.size())
                {
                    chart[row++].push_back(s[i++]);
                }
                direction=0;
                row = numRows-2;
            }
            
            else
            {
               while(row>=0 && i<s.size())
                {
                    chart[row--].push_back(s[i++]);
                }
                direction=1;
                row = 1; 
            }
        }
        
        string ans="";
        
        for(int i=0;i<chart.size();i++)
        {
            ans+=chart[i];
        }
        
        return ans;
    }
};