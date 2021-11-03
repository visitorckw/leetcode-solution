/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,bool>table;
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(table[nums[i]]) return true;
            table[nums[i]]=true;
        }
        return false;
    }
};
// @lc code=end
