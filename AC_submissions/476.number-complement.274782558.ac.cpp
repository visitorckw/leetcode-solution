/*
 * @lc app=leetcode id=476 lang=cpp
 *
 * [476] Number Complement
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    int power = 1;
    int findComplement(int num) {
        if(!num) return 1;
        while(num)
        {
            //cout << ans << ' ';
            ans += (!(num & 1)) * power;
            power <<= 1;
            num >>= 1;
        }
        return ans;
    }
};
// @lc code=end
