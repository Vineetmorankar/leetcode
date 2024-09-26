class MyCalendar {
public:
    vector<pair<int,int>> range;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        
        for(auto p : range)
        {
            if(p.first<end && start<p.second)
            {
                return false;
            }
        }
        
        pair<int,int> pr;
        pr.first=start;
        pr.second=end;
        range.push_back(pr);
        
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */