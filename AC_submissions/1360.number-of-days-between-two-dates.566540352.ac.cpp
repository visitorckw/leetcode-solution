/*
 * @lc app=leetcode id=1360 lang=cpp
 *
 * [1360] Number of Days Between Two Dates
 */

// @lc code=start
class Solution {
public:
    bool leap(const int year){
        if(year % 400 == 0) return true;
        if(year % 100 == 0) return false;
        if(year % 4 == 0) return true;
        return false;
    }
    int daysBetweenDates(string date1, string date2) {
        int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        const int y1 = stoi(date1.substr(0,4));
        const int m1 = stoi(date1.substr(5,2));
        const int d1 = stoi(date1.substr(8,2));
        const int y2 = stoi(date2.substr(0,4));
        const int m2 = stoi(date2.substr(5,2));
        const int d2 = stoi(date2.substr(8,2));
        int days1 = 0;
        for(int i = 1971; i < y1; i++)
            days1 += (leap(i) ? 366 : 365);
        day[2] = (leap(y1) ? 29 : 28);
        for(int i = 1; i < m1; i++)
            days1 += day[i];
        days1 += d1;
        int days2 = 0;
        for(int i = 1971; i < y2; i++)
            days2 += (leap(i) ? 366 : 365);
        day[2] = (leap(y2) ? 29 : 28);
        for(int i = 1; i < m2; i++)
            days2 += day[i];
        days2 += d2;
        return abs(days1 - days2);
    }
};
// @lc code=end
