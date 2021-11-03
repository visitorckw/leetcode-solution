/*
 * @lc app=leetcode id=1304 lang=cpp
 *
 * [1304] Find N Unique Integers Sum up to Zero
 */

// @lc code=start
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>vec(n);
        if(n%2)
        {
            vec[0] = 0;
            for(int i = 1; i <= n / 2; i++)
            {
                vec[i] = i;
                vec[n-i] = -i;
            }
            return vec;
        }
        for(int i = 1; i <= n / 2; i++)
        {
            vec[i-1] = i;
            vec[n-i] = -i;
        }
        return vec;
    }
};
// @lc code=end
