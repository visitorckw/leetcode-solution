/*
 * @lc app=leetcode id=1389 lang=cpp
 *
 * [1389] Create Target Array in the Given Order
 */

// @lc code=start
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        const unsigned int size = nums.size();
        vector<int> res;
        for(int i = 0; i < size; i++){
            res.insert(res.begin() + index[i], nums[i]);
        }
        return res;
    }
};
// @lc code=end
