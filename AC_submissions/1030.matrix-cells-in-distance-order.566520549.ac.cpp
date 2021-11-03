/*
 * @lc app=leetcode id=1030 lang=cpp
 *
 * [1030] Matrix Cells in Distance Order
 */

// @lc code=start
int rc, cc;
static bool cmp(const vector<int>&a, const vector<int>&b){
    const int L = abs(a[0] - rc) + abs(a[1] - cc);
    const int R = abs(b[0] - rc) + abs(b[1] - cc);
    return L < R;
}
class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> res(rows*cols, vector<int>(2, 0));
        rc = rCenter;
        cc = cCenter;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                res[i*cols+j][0] = i;
                res[i*cols+j][1] = j;
            }
        }
        sort(res.begin(), res.end(), cmp);
        return res;
    }
};
// @lc code=end
