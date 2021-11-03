/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution {
public:
    double average(vector<int>& salary) {
        int max = INT_MIN;
        int min = INT_MAX;
        int sum = 0;
        for(auto x : salary){
            sum += x;
            max = max < x ? x : max;
            min = min > x ? x : min;
        }
        sum -= min + max;
        return sum * 1.0 / (salary.size() - 2);
    }
};
// @lc code=end
