/*
 * @lc app=leetcode id=1880 lang=cpp
 *
 * [1880] Check if Word Equals Summation of Two Words
 */

// @lc code=start
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int x = 0, y = 0, z = 0;
        for(auto ch : firstWord){
            x *= 10;
            x += ch - 'a';
        }
        for(auto ch : secondWord){
            y *= 10;
            y += ch - 'a';
        }
        for(auto ch : targetWord){
            z *= 10;
            z += ch - 'a';
        }
        return x + y == z;
    }
};
// @lc code=end
