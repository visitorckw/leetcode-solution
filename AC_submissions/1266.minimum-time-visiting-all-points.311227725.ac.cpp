/*
 * @lc app=leetcode id=1266 lang=cpp
 *
 * [1266] Minimum Time Visiting All Points
 */

// @lc code=start
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        int temp;
        int x, y;
        for(int i = 0; i < points.size() - 1; i++)
        {
            x = abs(points[i][0] - points[i+1][0]);
            y = abs(points[i][1] - points[i+1][1]);
            temp = min(x,y);
            sum += temp;
            sum += x + y - 2 * temp;
        }
        return sum;
    }
};
// @lc code=end
