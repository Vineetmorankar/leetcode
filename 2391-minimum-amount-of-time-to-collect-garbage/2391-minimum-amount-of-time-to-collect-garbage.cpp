class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int n = garbage.size();
        
        int pickm = 0;
        int pickp = 0;
        int pickg = 0;
        
        int travelm = 0;
        int travelp = 0;
        int travelg = 0;
        
        int lastm = 0;
        int lastp = 0;
        int lastg = 0;
        
        for(int i=0;i<n;i++)
        {
            string ch = garbage[i];
            
            for(int j=0;j<ch.size();j++)
            {
                if(ch[j]=='P')
                {
                    pickp++;
                    lastp = i;
                }
                else if(ch[j]=='G')
                {
                    pickg++;
                    lastg = i;
                }
                 else if(ch[j]=='M')
                {
                    pickm++;
                    lastm = i;
                }
            }
        }
        
        for(int i=0;i<lastp;i++)
        {
            travelp+=travel[i];
        }
        
        for(int i=0;i<lastg;i++)
        {
            travelg+=travel[i];
        }
        
        for(int i=0;i<lastm;i++)
        {
            travelm+=travel[i];
        }
        
        int ans = (pickp+travelp) + (pickg+travelg) + (pickm+travelm);
        
        return ans;
    }
};