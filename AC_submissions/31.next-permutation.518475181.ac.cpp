/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = nums.size() - 1;
        while(index and nums[index] <= nums[index-1]) index--;
        if(!index){
            reverse(nums.begin(), nums.end());
            return;
        }
        index--;
        int change = nums.size() - 1;
        while(nums[change] <= nums[index]) change--;
        swap(nums[change], nums[index]);
        sort(nums.begin() + index + 1, nums.end());
    }
};
// @lc code=end
