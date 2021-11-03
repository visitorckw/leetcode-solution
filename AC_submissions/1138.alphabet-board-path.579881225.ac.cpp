/*
 * @lc app=leetcode id=1138 lang=cpp
 *
 * [1138] Alphabet Board Path
 */

// @lc code=start
class Solution {
public:
    // const char[6][5] = {"abcde", "fghij", "klmno", "pqrst", "uvwxy", "z"};
    string alphabetBoardPath(string target) {
        int x = 0;
        int y = 0;
        string res;
        for(auto ch : target){
            if(x == 5 && y == 0 && ch != 'z'){
                res += 'U';
                x--;
            }
            int tx = (ch - 'a') / 5;
            int ty = (ch - 'a') % 5;
            if(ty < y){
                for(int i = 0; i < y - ty; i++)
                    res += 'L';
            }
            if(ty > y){
                for(int i = 0; i < ty - y; i++)
                    res += 'R';
            }
            if(tx < x){
                for(int i = 0; i < x - tx; i++)
                    res += 'U';
            }
            if(tx > x){
                for(int i = 0; i < tx - x; i++)
                    res += 'D';
            }
            x = tx;
            y = ty;
            res += '!';
        }
        return res;
    }
};
// @lc code=end
