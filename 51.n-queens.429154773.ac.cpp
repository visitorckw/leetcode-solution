/*
 * @lc app=leetcode id=51 lang=cpp
 *
 * [51] N-Queens
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>>ans;
    vector<bool>mx;
    vector<bool>my;
    vector<bool>md1;
    vector<bool>md2;
    void f(int x, int y, vector<string>&sol, int q, int n){
        if(x >= n){
            x = 0;
            ++y;
        }
        if(y >= n){
            if(q == n)
                ans.push_back(sol);
            return;
        }
        int d1 = (x + y) % (2 * n - 1);
        int d2 = (x - y + 2 * n - 1) % (2 * n - 1);
        if(!mx[x] and !my[y] and !md1[d1] and !md2[d2]){
            mx[x] = my[y] = md1[d1] = md2[d2] = true;
            sol[x][y] = 'Q';
            f(x+1,y,sol,q+1,n);
            sol[x][y] = '.';
            mx[x] = my[y] = md1[d1] = md2[d2] = false;
        }
        f(x+1,y,sol,q,n);
    }
    vector<vector<string>> solveNQueens(int n) {
        string temp(n,'.');
        vector<string>sol(n,temp);
        for(int i = 0; i < n; i++){
            mx.push_back(false);
            my.push_back(false);
        }
        for(int i = 0; i < 2 * n - 1; i++){
            md1.push_back(false);
            md2.push_back(false);
        }
        f(0,0,sol,0,n);
        return ans;
    }
};
// @lc code=end
