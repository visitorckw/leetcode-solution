/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution {
public:
    vector<vector<char>> grid;
    bool row[9][9];
    bool col[9][9];
    bool s[3][3][9];
    bool dfs(int x, int y)
    {
        if(y >= 9)
            return true;
        if(x >= 9)
            return dfs(0, y+1);
        if(grid[x][y] != '.')
            return dfs(x+1, y);
        for(int i = 0; i < 9; i++)
        {
            if(!row[x][i] && !col[y][i] && !s[x/3][y/3][i])
            {
                grid[x][y] = '1' + i;
                row[x][i] = true;
                col[y][i] = true;
                s[x/3][y/3][i] = true;
                if( dfs(x+1, y) )
                    return true;
                grid[x][y] = '.';
                row[x][i] = false;
                col[y][i] = false;
                s[x/3][y/3][i] = false;
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] != '.')
                {
                    row[i][board[i][j] - '1'] = true;
                    col[j][board[i][j] - '1'] = true;
                    s[i/3][j/3][board[i][j] - '1'] = true;
                }
            }
        }
        grid = board;
        dfs( 0, 0);
        board = grid;
    }
};
// @lc code=end
