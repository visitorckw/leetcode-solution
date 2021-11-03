/*
 * @lc app=leetcode id=2027 lang=cpp
 *
 * [2027] Minimum Moves to Convert String
 */

// @lc code=start
class Solution {
public:
    int minimumMoves(string s) {
        int ctr = 0;
        int i = 0;
        const int n = s.size();
        while( i < n ){
            if(s[i] == 'O') i++;
            else{
                ctr++;
                i += 3;
            }
        }
        return ctr;
    }
};
// @lc code=end
