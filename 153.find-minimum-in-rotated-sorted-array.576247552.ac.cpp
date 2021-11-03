/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int L = 0;
        int R = nums.size() - 1;
        while(L <= R){
            int m = L + (R - L) / 2;
            if(m && nums[m-1] > nums[m]) return nums[m];
            if(m != nums.size() - 1 && nums[m] > nums[m+1]) return nums[m+1];
            if(nums[L] <= nums[R]) return nums[L];
            if(nums[L] > nums[m]) R = m - 1;
            else L = m + 1;
        }
        return -1;
    }
};
// @lc code=end
