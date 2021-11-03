/*
 * @lc app=leetcode id=1037 lang=cpp
 *
 * [1037] Valid Boomerang
 */

// @lc code=start
class Solution {
public:
    int dot(const vector<int>& v1, const vector<int>& v2){
        return v1[0] * v2[1] - v1[1] * v2[0];
    }
    bool isBoomerang(vector<vector<int>>& points) {
        vector<int>v1(2), v2(2);
        v1[0] = points[1][0] - points[0][0];
        v1[1] = points[1][1] - points[0][1];
        v2[0] = points[2][0] - points[0][0];
        v2[1] = points[2][1] - points[0][1];
        return dot(v1, v2);
    }
};
// @lc code=end
