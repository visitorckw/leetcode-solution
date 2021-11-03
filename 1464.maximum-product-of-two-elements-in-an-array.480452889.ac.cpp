/*
 * @lc app=leetcode id=1464 lang=cpp
 *
 * [1464] Maximum Product of Two Elements in an Array
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m1 = INT_MIN, m2 = INT_MIN;
        for(auto x : nums){
            if(x > m2){
                m2 = x;
                if(m2 > m1)
                    swap(m1, m2);
            }
        }
        return (m1 - 1) * (m2 - 1);
    }
};
// @lc code=end
