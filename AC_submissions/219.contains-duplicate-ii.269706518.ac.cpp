/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,vector<int>>table;
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(table[nums[i]].empty()) table[nums[i]].push_back(i);
            else 
            {
                for(int j = 0; j < table[nums[i]].size(); j++)
                {
                    if(i - table[nums[i]][j] <= k) return true;
                }
                table[nums[i]].push_back(i);
            }
        }
        return false;
    }
};
// @lc code=end
