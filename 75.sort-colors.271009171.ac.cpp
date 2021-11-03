/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    int L = 0, R, i = 0; 
    
    void sortColors(vector<int>& nums) {
        R = nums.size() - 1;
        while(i <= R)
        {
            if(!nums[i]) swap(nums[i++],nums[L++]);
            else if(nums[i] == 2) swap(nums[i],nums[R--]);
            else i++;
        }
    }
};
// @lc code=end
