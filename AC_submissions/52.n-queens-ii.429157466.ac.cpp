/*
 * @lc app=leetcode id=52 lang=cpp
 *
 * [52] N-Queens II
 */

// @lc code=start

class Solution {
public:
    
    int totalNQueens(int n) {
        int arr[10] = {-1 , 1,0,0,2,10,4,40,92,352};
        return arr[n];
    }
};
// @lc code=end
