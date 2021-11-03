/*
 * @lc app=leetcode id=788 lang=cpp
 *
 * [788] Rotated Digits
 */

// @lc code=start
class Solution {
public:
    int table[10] = {0,1,5,-1,-1,2,9,-1,8,6};
    int ctr = 0;
    int temp, num;
    int rotatedDigits(int N) {
        for(int i = 1; i <= N; i++) {
            temp = i;
            num = 0;
            for(int j = 1; temp; j *= 10) {
                if(table[temp % 10] == -1)
                    goto label;
                num += j * table[temp % 10];
                temp /= 10;
            }
            if(num != i)
                ctr++;
            label:
                0;
        }
        return ctr;
    }
};
// @lc code=end
