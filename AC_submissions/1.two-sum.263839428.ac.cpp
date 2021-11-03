/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>table;
        for(int i=0; i<nums.size(); i++)
        {
            if(table.find(target-nums[i]) != table.end()) 
                return vector<int>({table[target-nums[i]],i});
            table[nums[i]] = i;
        }
        return vector<int>({-1,-1});
    }
};
// @lc code=end
