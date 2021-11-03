/*
 * @lc app=leetcode id=275 lang=cpp
 *
 * [275] H-Index II
 */

// @lc code=start
class Solution {
public:
    int hIndex(vector<int>& citations) {
        const int size = citations.size();
        int L = 0;
        int R = size - 1;
        int res = 0;
        int m;
        while(L <= R){
            m = L + (R - L) / 2;
            if(citations[m] < size - m)
                L = m + 1;
            else if(citations[m] > size - m){
                R = m - 1;
                res = max(res, size - m);
            }
            else{
                return size - m;
            }
        }
        return res;
    }
};
// @lc code=end
