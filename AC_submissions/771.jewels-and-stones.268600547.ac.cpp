/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    unordered_map<char,bool> table;
    int ctr = 0;
    
    int numJewelsInStones(string J, string S) {
        for(int i = 0; i < J.size(); i++) table[J[i]] = true;
        for(int i = 0; i < S.size(); i++) {
            if(table[S[i]]) ctr++;
        }
        return ctr;
    }
};
// @lc code=end
