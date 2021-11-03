/*
 * @lc app=leetcode id=868 lang=cpp
 *
 * [868] Binary Gap
 */

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int last = -1;
        for(int i = 0; n ; i++, n >>= 1){
            if(n & 1){
                if(last == -1) last = i;
                else{
                    ans = max(ans, i - last);
                    last = i;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
