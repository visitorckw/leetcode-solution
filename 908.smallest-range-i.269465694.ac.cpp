/*
 * @lc app=leetcode id=908 lang=cpp
 *
 * [908] Smallest Range I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        if(K < 0) K = -K;
        int max = - 1e9, min = 1e9;
        for(auto i:A) 
        {
            if(i > max) max = i;
            if(i < min) min = i;
        }
        if(max - min <= 2*K) return 0;
        return max - min - 2*K;
    }
};
// @lc code=end
