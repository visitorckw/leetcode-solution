/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int L = 0, R = nums.size()-1, m;
        while(L <= R){
            m = L+(R-L)/2;
            if(nums[m] == target) return m;
            if(nums[m] < target) L = m + 1;
            else R = m - 1;
        }
        return L;
    }
};
// @lc code=end
