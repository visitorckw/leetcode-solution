/*
 * @lc app=leetcode id=1812 lang=cpp
 *
 * [1812] Determine Color of a Chessboard Square
 */

// @lc code=start
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (coordinates[0] + coordinates[1] - '0' - 'a' + 1) & 1;
    }
};
// @lc code=end
