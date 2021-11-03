/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int h1 = INT_MIN, h2 = INT_MIN;
        int index1 = -1, index2 = -1;
        int index = 0;
        for(auto x : nums){
            if(x > h2){
                h2 = x;
                index2 = index;
            }
            if(h2 > h1){
                swap(h1, h2);
                swap(index1, index2);
            }
            index++;
        }
        return h1 >= 2 * h2 ? index1 : -1;
    }
};
// @lc code=end
