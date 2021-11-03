/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int L=1,R=n,m;
        while(R-L>1)
        {
            m=L+(R-L)/2;
            if(isBadVersion(m)) R=m;
            else L=m;
        }
        if(isBadVersion(1)) return 1;
        return R;
    }
};
// @lc code=end
