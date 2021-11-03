/*
 * @lc app=leetcode id=836 lang=cpp
 *
 * [836] Rectangle Overlap
 */

// @lc code=start
class Solution {
public:
    
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        if(rec1[2] <= rec2[0]) return false;
        if(rec1[0] >= rec2[2]) return false;
        if(rec1[3] <= rec2[1]) return false;
        if(rec1[1] >= rec2[3]) return false;
        return true;
    }
};
// @lc code=end
