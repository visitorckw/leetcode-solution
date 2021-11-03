/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool x = true;
        bool y = true;
        int f = A[0];
        for(int i = 1; i < A.size(); ++i){
            if(A[i] < f)
                x = false;
            else if(A[i] > f)
                y = false;
            if(!x and !y)
                return false;
            f = A[i];
        }
        return x or y;
    }
};
// @lc code=end
