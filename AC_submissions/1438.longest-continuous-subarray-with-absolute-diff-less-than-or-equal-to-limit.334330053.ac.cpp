/*
 * @lc app=leetcode id=1438 lang=cpp
 *
 * [1438] Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
 */

// @lc code=start
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>table;
        int L = 0, R;
        int ans = 0;
        for(R = 0; R < nums.size(); R++) {
            table.insert(nums[R]);
            while(*table.rbegin() - *table.begin() > limit) 
                table.erase(table.find(nums[L++]));
            //if(*table.rbegin() - *table.begin() <= limit)
            ans = max(ans, R-L+1);
        }
        return ans;
    }
};
// @lc code=end
