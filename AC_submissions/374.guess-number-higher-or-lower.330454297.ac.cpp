/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int L = 1;
        int R = n;
        int m;
        int result;
        while(L <= R) {
            m = L + ((R - L) >> 1);
            result = guess(m);
            if(result == 1)
                L = m + 1;
            else if(result == -1)
                R = m - 1;
            else return m;
        }
        return m;
    }
};
// @lc code=end
