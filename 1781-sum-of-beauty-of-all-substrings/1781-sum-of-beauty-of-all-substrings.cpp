class Solution {
public:
    
    int checkbeauty(vector<int> &alpha)
    {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i=0;i<26;i++)
        {
            int count = alpha[i];
            maxi = max(maxi, count);
            if(count>=1)
                mini = min(mini,count);
        }
        
        return maxi-mini;
    }
    
    int beautySum(string s) {
        
        int res = 0;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            vector<int> alpha(26,0);
            for(int j=i;j<n;j++)
            {
                alpha[s[j]-'a']++;
                res+=checkbeauty(alpha);
            }
        }
        
        return res;
    }
};