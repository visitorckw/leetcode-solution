/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        int x = n;
        int ctr = 0;
        while(x){
            if(x & 1) ++ctr;
            x >>= 1;
        }
        if(ctr >= 2) return false;
        return 0b01010101010101010101010101010101 & n;
    }
};
// @lc code=end
