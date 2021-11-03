/*
 * @lc app=leetcode id=1551 lang=cpp
 *
 * [1551] Minimum Operations to Make Array Equal
 */

// @lc code=start
class Solution {
public:
    int minOperations(int n) {
        if(n & 1){
            // 2 + 4 + 6 ...(共n/2)
            n /= 2;
            return (2 + ( 2 * n )) * n / 2;
        }
        else{
            //1 + 3 + 5...(共n/2)
            n /= 2;
            return (1 + (2 * n - 1)) * n / 2;
        }
        return 0;
    }
};
// @lc code=end
