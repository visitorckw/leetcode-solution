/*
 * @lc app=leetcode id=1974 lang=cpp
 *
 * [1974] Minimum Time to Type Word Using Special Typewriter
 */

// @lc code=start
class Solution {
public:
    int minTimeToType(string word) {
        int res = 0;
        char point = 'a';
        for(auto ch : word){
            int dis = abs(ch - point);
            dis = min(dis, 26 - dis);
            res += dis;
            point = ch;
        }
        return res + word.size();
    }
};
// @lc code=end
