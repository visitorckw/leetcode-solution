/*
 * @lc app=leetcode id=2001 lang=cpp
 *
 * [2001] Number of Pairs of Interchangeable Rectangles
 */

// @lc code=start
class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        unordered_map<double, long long> table;
        for(auto x : rectangles){
            long long g = __gcd(x[0], x[1]);
            x[0] /= g;
            x[1] /= g;
            table[x[0] *1.0 /x[1]]++;
        }
        long long res = 0;
        for(auto it : table){
            res += 1LL * it.second * (it.second - 1) / 2;
        }
        return res;
    }
};
// @lc code=end
