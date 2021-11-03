/*
 * @lc app=leetcode id=1394 lang=cpp
 *
 * [1394] Find Lucky Integer in an Array
 */

// @lc code=start
class Solution {
public:
    int table[501] = {};
    int findLucky(vector<int>& arr) {
        int res = -1;
        for(auto x : arr) table[x]++;
        for(auto x : arr)
            if(table[x] == x)
                res = max(res, x);
        return res;
    }
};
// @lc code=end
