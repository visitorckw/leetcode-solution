/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution {
public:
    int numberOfSteps(int num) {
        int res = 0;
        while(num){
            if(num & 1) num--;
            else num >>= 1;
            ++res;
        }
        return res;
    }
};
// @lc code=end
