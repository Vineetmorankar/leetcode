class Solution {
public:
    
    int convert(string &time)
    {
        int hrs = stoi(time.substr(0,2));
        int min = stoi(time.substr(3,2));
        
        return 60*hrs + min;
       
    }
    
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int> mins;
        
        for(auto time : timePoints)
        {
            mins.push_back(convert(time));
        }
        
        sort(mins.begin(), mins.end());
        
        int mini = INT_MAX;
        for(int i=0;i<mins.size()-1;i++)
        {
            mini = min(mini, mins[i+1]-mins[i]);
        }
        
        int lastdiff = mins[0] + 1440 - mins[mins.size()-1];
        mini =  min(mini,lastdiff);
        
        return mini;
    }
};