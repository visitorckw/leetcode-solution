/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(auto vec : grid)
            for(auto x : vec)
                if(x < 0)
                    ans++;
        return ans;
    }
};
// @lc code=end
