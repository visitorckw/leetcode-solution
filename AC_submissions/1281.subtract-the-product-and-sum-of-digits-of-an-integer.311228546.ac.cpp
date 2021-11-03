/*
 * @lc app=leetcode id=1281 lang=cpp
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */

// @lc code=start
class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp;
        int product = 1;
        int sum = 0;
        while(n)
        {
            temp = n % 10;
            product *= temp;
            sum += temp;
            n /= 10;
        }
        return product - sum;
    }
};
// @lc code=end
