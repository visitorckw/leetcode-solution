/*
 * @lc app=leetcode id=2038 lang=cpp
 *
 * [2038] Remove Colored Pieces if Both Neighbors are the Same Color
 */

// @lc code=start
class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size() < 3) return false;
        int ctr1 = 0;
        int ctr2 = 0;
        char pre1 = colors[0];
        char pre2 = colors[1];
        for(int i = 2; i < colors.size(); i++){
            if(pre1 == pre2){
                if(pre1 == colors[i])
                    colors[i] == 'A' ? ctr1++ : ctr2++;
            }
            pre1 = pre2;
            pre2 = colors[i];
        }
        return ctr1 > ctr2;
    }
};
// @lc code=end
