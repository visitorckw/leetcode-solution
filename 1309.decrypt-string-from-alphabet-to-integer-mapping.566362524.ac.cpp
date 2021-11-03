/*
 * @lc app=leetcode id=1309 lang=cpp
 *
 * [1309] Decrypt String from Alphabet to Integer Mapping
 */

// @lc code=start
class Solution {
public:
    string freqAlphabets(string s) {
        string res;
        for(int i = 0; i < s.size(); ){
            if(i + 2 < s.size() && s[i+2] == '#'){
                res += 10 * (s[i] - '0') + s[i+1] - '1' + 'a';
                i += 3;
            }
            else{
                res += s[i] - '1' + 'a';
                i++;
            }
        }
        return res;
    }
};
// @lc code=end
