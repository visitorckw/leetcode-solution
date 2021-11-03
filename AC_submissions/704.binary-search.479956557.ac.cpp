/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int L = 0, R = nums.size() - 1, m;
        while(L <= R){
            m = L + (R - L) / 2;
            if(nums[m] == target)
                return m;
            else if(nums[m] < target)
                L = m + 1;
            else
                R = m - 1;
        }
        return -1;
    }
};
// @lc code=end
