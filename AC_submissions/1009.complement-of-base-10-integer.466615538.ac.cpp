/*
 * @lc app=leetcode id=1009 lang=cpp
 *
 * [1009] Complement of Base 10 Integer
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int N) {
        if(!N) return 1;
        int ans = 0;
        int i = 0;
        while(N){
            if(!(N & 1)) ans += 1 << i;
            i++;
            N >>= 1;
        }
        return ans;
    }
};
// @lc code=end
