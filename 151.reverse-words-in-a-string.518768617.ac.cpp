/*
 * @lc app=leetcode id=151 lang=cpp
 *
 * [151] Reverse Words in a String
 */

// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        vector<string> word;
        string str;
        for(auto ch : s){
            if(ch == ' '){
                if(str.empty()) continue;
                word.push_back(str);
                str.clear();
            }
            else str += ch;
        }
        if(!str.empty()) word.push_back(str);
        reverse(word.begin(), word.end());
        string res;
        for(auto s : word){
            res += s;
            res += ' ';
        }
        res.pop_back();
        return res;
    }
};
// @lc code=end
