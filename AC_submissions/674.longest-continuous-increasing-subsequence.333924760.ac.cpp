/*
 * @lc app=leetcode id=674 lang=cpp
 *
 * [674] Longest Continuous Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int ans = 0, ctr;
        for(int i = 0; i < nums.size();) {
            int j;
            for(j = i; j < nums.size(); j++) {
                if(j == nums.size() - 1)
                    break;
                if(nums[j+1] <= nums[j])
                    break;
            }
            ans = max(j - i + 1, ans);
            i = j + 1;
        }
        return ans;
    }
};
// @lc code=end
