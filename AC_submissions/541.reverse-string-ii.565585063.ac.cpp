/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */

// @lc code=start
#define min(x,y) ((x)<(y)?(x):(y))
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i < s.size(); i += 2 * k){
            const int L = i;
            const int R = min(s.size(), i + k);
            reverse(s.begin() + L, s.begin() + R);
        }
        return s;
    }
};
// @lc code=end
