/*
 * @lc app=leetcode id=1848 lang=cpp
 *
 * [1848] Minimum Distance to the Target Element
 */

// @lc code=start
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        for(int i = 0; ; i++){
            const int L = start - i;
            const int R = start + i;
            if((L >= 0 and nums[L] == target) or (R < nums.size() and nums[R] == target)) 
                return i;
        }
        return -1;
    }
};
// @lc code=end
