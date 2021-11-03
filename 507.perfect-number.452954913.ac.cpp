/*
 * @lc app=leetcode id=507 lang=cpp
 *
 * [507] Perfect Number
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i * i <= num; i++){
            if(! (num % i)) {
                sum += i;
                if(i*i != num) sum += num / i;
                // if(sum > num) return false;
            }
        }
        return num == sum - num;
    }
};
// @lc code=end
