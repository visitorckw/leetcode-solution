/*
 * @lc app=leetcode id=2037 lang=cpp
 *
 * [2037] Minimum Number of Moves to Seat Everyone
 */

// @lc code=start
class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        int res = 0;
        for(int i = 0; i < students.size(); i++)
            res += abs(seats[i] - students[i]);
        return res;
    }
};
// @lc code=end
