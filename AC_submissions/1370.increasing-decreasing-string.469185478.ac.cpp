/*
 * @lc app=leetcode id=1370 lang=cpp
 *
 * [1370] Increasing Decreasing String
 */

// @lc code=start
class Solution {
public:
    string sortString(string s) {
        int table[26] = {};
        int pick = 0;
        string result(s.size(), '\0');
        for(auto c : s)
            table[c - 'a']++;
        while(pick < s.size()){
            for(int i = 0; i < 26; i++){
                if(table[i]){
                    result[pick++] = (char)(i + 'a');
                    table[i]--;
                }
            }
            for(int i = 25; i >= 0; i--){
                if(table[i]){
                    result[pick++] = (char)(i + 'a');
                    table[i]--;
                }
            }
        }
        return result;
    }
};
// @lc code=end
