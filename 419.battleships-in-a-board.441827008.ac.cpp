/*
 * @lc app=leetcode id=419 lang=cpp
 *
 * [419] Battleships in a Board
 */

// @lc code=start
class Solution {
public:
    int res = 0;
    
    int countBattleships(vector<vector<char>>& board) {
        if(board.empty() or board[0].empty()) return 0;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == '.') continue;
                if( i-1 >= 0 and board[i-1][j] == 'X') continue;
                if( j-1 >= 0 and board[i][j-1] == 'X') continue;
                ++res;
            }
        }
        return res;
    }
};
// @lc code=end
