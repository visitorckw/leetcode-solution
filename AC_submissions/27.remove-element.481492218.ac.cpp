/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int R = nums.size() - 1;
        
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] == val){
                swap(nums[i], nums[R--]);
                --size;
            }
        }
        return size;
    }
};
// @lc code=end
