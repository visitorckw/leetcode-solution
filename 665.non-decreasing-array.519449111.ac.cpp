/*
 * @lc app=leetcode id=665 lang=cpp
 *
 * [665] Non-decreasing Array
 */

// @lc code=start
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int pre = nums[0];
        bool skip = false;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] >= pre) {
                pre = nums[i];
                continue;
            }
            if(skip) return false;
            skip = true;
            if(i == 1 or nums[i] >= nums[i-2])
                pre = nums[i];
        }
        return true;
    }
};
// @lc code=end
