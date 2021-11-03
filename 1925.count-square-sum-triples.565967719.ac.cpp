/*
 * @lc app=leetcode id=1925 lang=cpp
 *
 * [1925] Count Square Sum Triples
 */

// @lc code=start
class Solution {
public:
    int countTriples(int n) {
        int ctr = 0;
        for(int a = 1; a <= n; a++)
            for(int b = a; b <= n; b++)
                for(int c = 1; c <= n; c++)
                    if(a*a + b*b == c*c)
                        a == b ? ++ctr : ctr+=2;
       return ctr;
    }
};
// @lc code=end
