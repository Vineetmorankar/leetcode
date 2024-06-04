class Solution {
public:
    static string str;
    static bool compare(char a, char b)
    {
        return(str.find(a)<str.find(b));
    }
    string customSortString(string order, string s) {
        str = order;
        sort(s.begin(), s.end(), compare);
        return s;
    }
};

string Solution::str;