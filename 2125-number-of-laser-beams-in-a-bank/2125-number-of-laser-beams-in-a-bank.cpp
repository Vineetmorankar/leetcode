class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        if(bank.size()==1) return 0;
        vector<int> cnt;
        
        for(int i=0;i<bank.size();i++)
        {
            int count = 0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1') count++;
            }
            
            if(count>0)
            {
                cnt.push_back(count);
            }
        }
        
        if(cnt.size()<2) return 0;
        
        int ans = 0;
        
        for(int i=0;i<cnt.size()-1;i++)
        {
            ans+=cnt[i]*cnt[i+1];
        }
        
        return ans;
    }
};