class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;
        
        for(auto s: strs)
        {
            string curr = s;
            sort(curr.begin(),curr.end());
            mp[curr].push_back(s);
        }
        
        for(auto sol:mp)
        {
            ans.push_back(sol.second);
        }
        
        return ans;
    }
};