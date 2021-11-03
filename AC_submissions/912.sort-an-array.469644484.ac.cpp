/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> count(100005, 0);
        vector<int> ans(nums.size());
        for(auto x : nums)
            count[50000+x]++;
        int ctr = 0;
        for(int i = 0; i < 100005; i++)
            for(int j = 0; j < count[i]; j++)
                ans[ctr++] = i - 50000;
        return ans;
    }
};
// @lc code=end
