/*
 * @lc app=leetcode id=1486 lang=cpp
 *
 * [1486] XOR Operation in an Array
 */

// @lc code=start
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        for(int i = 0; i < n; i++){
            int temp = start + (i << 1);
            ans ^= temp;
        }
        return ans;
    }
};
// @lc code=end
