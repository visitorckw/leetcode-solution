/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int L = 0;
        for(int i = 0; i < A.size(); i++){
            if(!(A[i] & 1))
                swap(A[i], A[L++]);
        }
        return A;
    }
};
// @lc code=end
