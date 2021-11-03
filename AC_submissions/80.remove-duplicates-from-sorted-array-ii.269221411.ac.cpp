/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,int>table;
    int removeDuplicates(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(!table[nums[i]]) table[nums[i]] = 1;
            else if(table[nums[i]] < 2) table[nums[i]] = 2;
            else 
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};
// @lc code=end
