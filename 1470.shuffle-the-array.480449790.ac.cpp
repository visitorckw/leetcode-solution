/*
 * @lc app=leetcode id=1470 lang=cpp
 *
 * [1470] Shuffle the Array
 */

// @lc code=start
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(n << 1, 0);
        for(int i = 0; i < n; i++){
            ans[i<<1] = nums[i];
            ans[(i<<1) + 1] = nums[n+i];
        }
        return ans;
    }
};
// @lc code=end
