/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int size = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]) ++size;
        }
        int p = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i and nums[i] == nums[i-1]) continue;
            nums[p++] = nums[i];
        }
        return size;
    }
};
// @lc code=end
