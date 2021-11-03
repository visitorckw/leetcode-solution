/*
 * @lc app=leetcode id=1275 lang=cpp
 *
 * [1275] Find Winner on a Tic Tac Toe Game
 */

// @lc code=start
class Solution {
public:
    bool win(int board[3][3]){
        for(int i = 0; i < 3; i++){
            if(!board[i][0]) continue;
            int val = board[i][0];
            if(board[i][1] == board[i][2] and board[i][1] == val) return true;
        }
        for(int i = 0; i < 3; i++){
            if(!board[0][i]) continue;
            int val = board[0][i];
            if(board[1][i] == board[2][i] and board[1][i] == val) return true;
        }
        if(board[0][0] and board[0][0] == board[1][1] and board[0][0] == board[2][2]) return true;
        if(board[1][1] and board[0][2] == board[1][1] and board[1][1] == board[2][0]) return true;
        return false;
    }
    string tictactoe(vector<vector<int>>& moves) {
        bool player = true;
        int ctr = 0;
        int board[3][3] = {};
        for(auto move : moves){
            if(ctr >= 9) return "Draw";
            board[move[0]][move[1]] = (player ? 1 : 2);
            ++ctr;
            if(win(board)) return player ? "A" : "B";
            player = !player;
        }
        return ctr >= 9 ? "Draw" : "Pending";
    }
};
// @lc code=end
