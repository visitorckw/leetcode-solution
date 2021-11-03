/*
 * @lc app=leetcode id=1952 lang=cpp
 *
 * [1952] Three Divisors
 */

// @lc code=start
class Solution {
public:
    bool isThree(int n) {
        int ctr = 1;
        for(int i = 1; i <= n / 2; i++){
            if(!(n % i)){
                ++ctr;
            } 
        }
        return ctr == 3;
    }
};
// @lc code=end
