/*
 * @lc app=leetcode id=1837 lang=cpp
 *
 * [1837] Sum of Digits in Base K
 */

// @lc code=start
class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        while(n){
            ans += n % k;
            n /= k;
        }
        return ans;
    }
};
// @lc code=end
