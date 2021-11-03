/*
 * @lc app=leetcode id=470 lang=cpp
 *
 * [470] Implement Rand10() Using Rand7()
 */

// @lc code=start
// The rand7() API is already defined for you.
// int rand7();
// @return a random integer in the range 1 to 7

class Solution {
public:
    int rand10() {
        while(true)
        {
            int x = rand7()-1;
            int y = rand7()-1;
            int ans = 7 * x + y;
            if(1 <= ans && ans <= 10)
                return ans;
        }
    }
};
// @lc code=end
