/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
public:
    int R = 0;
    int L = 0;
    int U = 0;
    int D = 0;
    bool judgeCircle(string moves) {
        for(auto c : moves)
        {
            switch(c)
            {
                case 'R':
                    R++;
                    break;
                case 'L':
                    L++;
                    break;
                case 'U':
                    U++;
                    break;
                default:
                    D++;
                    break;
            }
        }
        return !(R - L) && !(U - D);
    }
};
// @lc code=end
