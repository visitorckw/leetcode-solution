/*
 * @lc app=leetcode id=1637 lang=cpp
 *
 * [1637] Widest Vertical Area Between Two Points Containing No Points
 */

// @lc code=start
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int res = 0;
        vector<int> cor;
        cor.reserve(points.size());
        for(auto p : points)
            cor.push_back(p[0]);
        sort(cor.begin(), cor.end());
        int pre = cor[0];
        for(auto x : cor){
            res = max(res, x - pre);
            pre = x;
        }
        return res;
    }
};
// @lc code=end
