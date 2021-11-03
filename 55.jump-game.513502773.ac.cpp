/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int far = 0;
        for(int i = 0; i < nums.size(); i++){
            if(far >= nums.size() - 1) return true;
            if(i > far) return false;
            far = max(far, i + nums[i]);
        }
        return false;
    }
};
// @lc code=end
