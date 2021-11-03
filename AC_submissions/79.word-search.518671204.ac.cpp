/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
public:
    int row;
    int col;
    vector<vector<bool>>visit;
    const int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    bool dfs(int x, int y, vector<vector<char>>&B, const string& word, int p){
        if(p >= word.size()) return true;
        if(x < 0 or y < 0 or x >= row or y >= col) return false;
        if(visit[x][y]) return false;
        if(B[x][y] != word[p]) return false;
        visit[x][y] = true;
        for(int i = 0; i < 4; i++){
            if(dfs(x+dir[i][0], y+dir[i][1], B, word, p+1))
                return true;
        }
        visit[x][y] = false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        row = board.size();
        col = board[0].size();
        visit = vector<vector<bool>>(row, vector<bool>(col, false));
        for(int x = 0; x < row; x++){
            for(int y = 0; y < col; y++){
                if(dfs(x,y,board,word,0))
                    return true;
            }
        }
        return false;
    }
};
// @lc code=end
