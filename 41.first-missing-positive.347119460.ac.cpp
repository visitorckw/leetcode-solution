/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> table(nums.begin(),nums.end());
        for(int i = 1; i <= nums.size() + 1; ++i)
            if(!table.count(i))
                return i;
        return 1;
    }
};
// @lc code=end
