/*
 * @lc app=leetcode id=1742 lang=cpp
 *
 * [1742] Maximum Number of Balls in a Box
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,int>table;
    int ans = 0;
    int f(int x){
        int res = 0;
        while(x){
            res += x % 10;
            x /= 10;
        }
        return res;
    }
    int countBalls(int lowLimit, int highLimit) {
        for(int i = lowLimit; i <= highLimit; i++)
            ans = max(ans, ++table[f(i)]);
        return ans;
    }
};
// @lc code=end
