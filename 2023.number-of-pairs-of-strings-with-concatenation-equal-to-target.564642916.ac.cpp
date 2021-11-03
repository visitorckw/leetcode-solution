/*
 * @lc app=leetcode id=2023 lang=cpp
 *
 * [2023] Number of Pairs of Strings With Concatenation Equal to Target
 */

// @lc code=start
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(i == j) continue;
                if(nums[i] + nums[j] == target) ++res;
            }
        }
        return res;
    }
};
// @lc code=end
