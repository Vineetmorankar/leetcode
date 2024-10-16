class MyCalendarTwo {
public:
    vector<pair<int, int>> bookings;  
    vector<pair<int, int>> overlaps;  

    MyCalendarTwo() {}

    bool book(int start, int end) {

        for (auto &overlap : overlaps) {
            if (max(start, overlap.first) < min(end, overlap.second)) {
                return false;  
            }
        }

        for (auto &booking : bookings) {
            int overlap_start = max(start, booking.first);
            int overlap_end = min(end, booking.second);
            if (overlap_start < overlap_end) {
                overlaps.push_back({overlap_start, overlap_end});  
            }
        }

        bookings.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */