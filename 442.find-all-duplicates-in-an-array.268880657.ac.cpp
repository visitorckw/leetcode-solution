/*
 * @lc app=leetcode id=442 lang=cpp
 *
 * [442] Find All Duplicates in an Array
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,bool> table;
    vector<int> ans;
    
    vector<int> findDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(table[nums[i]]) ans.push_back(nums[i]);
            else table[nums[i]] = true;
        }
        return ans;
    }
};
// @lc code=end
