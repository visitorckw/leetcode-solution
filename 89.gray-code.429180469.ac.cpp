/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution {
public:
    unsigned int f(unsigned int x){
        return x ^ (x >> 1);
    }
    vector<int> grayCode(int n) {
        int end = (1 << n);
        vector<int>ans;
        for(unsigned int i = 0 ; i < end; i++){
            ans.push_back(f(i));
        }
        return ans;
    }
};
// @lc code=end
