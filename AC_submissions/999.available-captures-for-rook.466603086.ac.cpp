/*
 * @lc app=leetcode id=999 lang=cpp
 *
 * [999] Available Captures for Rook
 */

// @lc code=start
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int x, y;
        int ans = 0;
        for(int i = 0; i < board.size(); i++)
            for(int j = 0; j < board[0].size(); j++)
                if(board[i][j] == 'R'){
                    x = i;
                    y = j;
                }
        for(int i = x - 1; i >= 0; i--){
            if(board[i][y] == 'B') break;
            if(board[i][y] == 'p'){
                ++ans;
                break;
            }
        }
        for(int i = y - 1; i >= 0; i--){
            if(board[x][i] == 'B') break;
            if(board[x][i] == 'p'){
                ++ans;
                break;
            }
        }
        for(int i = x + 1; i < board.size(); i++){
            if(board[i][y] == 'B') break;
            if(board[i][y] == 'p'){
                ++ans;
                break;
            }
        }
        for(int i = y + 1; i < board[0].size(); i++){
            if(board[x][i] == 'B') break;
            if(board[x][i] == 'p'){
                ++ans;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end
