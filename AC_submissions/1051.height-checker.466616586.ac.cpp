/*
 * @lc app=leetcode id=1051 lang=cpp
 *
 * [1051] Height Checker
 */

// @lc code=start
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> vec = heights;
        sort(vec.begin(), vec.end());
        int ans = 0;
        for(int i = 0; i < vec.size(); i++)
            if(vec[i] != heights[i])
                ++ans;
        return ans;
    }
};
// @lc code=end
