/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
 */

// @lc code=start
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int dis = INT_MAX;
        int index = -1;
        int i = 0;
        for(auto p : points){
            if(p[0] == x || p[1] == y){
                if(abs(p[0]-x) + abs(p[1]-y) < dis){
                    dis = abs(p[0]-x) + abs(p[1]-y);
                    index = i;
                }
            }
            i++;
        }
        return index;
    }
};
// @lc code=end
