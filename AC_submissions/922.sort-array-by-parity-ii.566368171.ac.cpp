/*
 * @lc app=leetcode id=922 lang=cpp
 *
 * [922] Sort Array By Parity II
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int odd = 1;
        for(int i = 0; i < nums.size(); i+=2){
            if(nums[i] & 1){
                swap(nums[i], nums[odd]);
                odd += 2;
                i -= 2;
            }
        }
        return nums;
    }
};
// @lc code=end
