/*
 * @lc app=leetcode id=1185 lang=cpp
 *
 * [1185] Day of the Week
 */

// @lc code=start
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month <= 2)
        {
            month += 12;
            year--;
        }
        int y = year % 100;
        int c = year;
        while(c > 100)
            c /= 10;
        int week;
        week = y + y / 4 + c / 4 - 2 * c + (26 * (month+1)) / 10 + day - 1;
        year++;
        week = (week % 7 + 7) % 7;
        switch (week)
        {
            case 0:
                return "Sunday";
            case 1:
                return "Monday";
            case 2:
                return "Tuesday";
            case 3:
                return "Wednesday";
            case 4:
                return "Thursday";
            case 5:
                return "Friday";
            case 6:
                return "Saturday";
        }
        return "Sunday";
    }
};
// @lc code=end
