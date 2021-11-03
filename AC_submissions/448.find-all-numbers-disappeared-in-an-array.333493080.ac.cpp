/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int index;
        for(auto n : nums) {
            index = abs(n) - 1;
            if(nums[index] > 0)
                nums[index] = -nums[index];
        }
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > 0)
                ans.push_back(i + 1);
        return ans;
    }
};
// @lc code=end
