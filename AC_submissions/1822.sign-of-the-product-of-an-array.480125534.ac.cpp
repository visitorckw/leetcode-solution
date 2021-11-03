/*
 * @lc app=leetcode id=1822 lang=cpp
 *
 * [1822] Sign of the Product of an Array
 */

// @lc code=start
class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool sign = true;
        for(auto x : nums){
            if(!x) return 0;
            if(x < 0) sign = !sign;
        }
        return sign ? 1 : -1;
    }
};
// @lc code=end
