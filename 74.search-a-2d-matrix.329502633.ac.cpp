/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix.front().empty())
            return false;
        const int n = matrix.size(), m = matrix.front().size();
        int L = 0, R = n * m - 1, mid;
        while(L <= R) {
            mid = ((L + R) >> 1);
            if(matrix[mid/m][mid%m] < target)
                L = mid + 1;
            else if(matrix[mid/m][mid%m] > target)
                R = mid - 1;
            else return true;
        }
        return false;
    }
};
// @lc code=end
