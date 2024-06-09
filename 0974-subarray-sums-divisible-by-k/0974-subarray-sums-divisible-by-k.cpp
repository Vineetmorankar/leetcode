class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       
        unordered_map<int, int> mp;
        int sum = 0;
        int rem = 0;
        mp[rem]++;
        int count = 0;
        
        for(auto i:nums)
        {
            sum+=i;
            
            rem = sum%k;
            
            if(rem<0) rem+=k;
            
            if(mp.find(rem)!=mp.end())
            {
                count+=mp[rem];
            }
            mp[rem]++;
        }
        return count;
    }
};