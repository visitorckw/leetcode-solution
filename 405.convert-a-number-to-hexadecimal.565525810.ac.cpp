/*
 * @lc app=leetcode id=405 lang=cpp
 *
 * [405] Convert a Number to Hexadecimal
 */

// @lc code=start
class Solution {
public:
    string toHex(int num) {
        string res;
        for(int i = 0; i < 8; i++){
            int x = 0;
            for(int j = 0; j < 4; j++){
                x <<= 1;
                // cout << (bool)(num & (1 << ((i * 4 + j))));
                if(num & (1 << (i * 4 + 3 - j)))
                    x |= 1;
            }
            // cout << x << '\n';
            res += (char)(x < 10 ? x + '0' : x - 10 + 'a');
        }
        while(!res.empty() && res.back() == '0')
            res.pop_back();
        if(res.empty()) return "0";
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end
