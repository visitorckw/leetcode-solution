/*
 * @lc app=leetcode id=1893 lang=cpp
 *
 * [1893] Check if All the Integers in a Range Are Covered
 */

// @lc code=start
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int cover[51] = {};
        for(int i = left; i <= right; i++)
            cover[i] = true;
        for(auto r : ranges)
            for(int i = r[0]; i <= r[1]; i++)
                cover[i] = false;
        for(int i = 0; i < 51; i++)
            if(cover[i]) return false;
        return true;
    }
};
// @lc code=end
