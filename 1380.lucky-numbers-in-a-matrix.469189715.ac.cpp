/*
 * @lc app=leetcode id=1380 lang=cpp
 *
 * [1380] Lucky Numbers in a Matrix
 */

// @lc code=start
class Solution {
public:
    unordered_set<int> table;
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        const int m = matrix.size();
        const int n = matrix[0].size();
        vector<int> ans;
        for(auto vec : matrix){
            int sol = INT_MAX;
            for(auto x : vec){
                sol = min(x,sol);
            }
            table.insert(sol);
        }
        for(int j = 0; j < n; j++){
            int sol = INT_MIN;
            for(int i = 0; i < m; i++)
                sol = max(matrix[i][j], sol);
            if(table.count(sol))
                ans.push_back(sol);
        }
        return ans;
    }
};
// @lc code=end
