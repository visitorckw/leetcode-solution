/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    unordered_set<string> table;
    string mapping[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {
        for(auto str : words){
            string s;
            for(auto ch : str)
                s += mapping[ch - 'a'];
            if(!table.count(s)){
                table.insert(s);
                ++ans;
            }
        }
        return ans;
    }
};
// @lc code=end
