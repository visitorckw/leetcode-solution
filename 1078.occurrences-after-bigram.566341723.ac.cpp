/*
 * @lc app=leetcode id=1078 lang=cpp
 *
 * [1078] Occurrences After Bigram
 */

// @lc code=start
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        vector<string> word;
        string str;
        for(auto ch : text){
            if(ch == ' '){
                word.push_back(str);
                str.clear();
            }
            else str += ch;
        }
        if(!str.empty()) word.push_back(str);
        
        for(int i = 1; i < word.size() - 1; i++){
            if(word[i] == second && word[i-1] == first)
                res.push_back(word[i+1]);
        }
        return res;
    }
};
// @lc code=end
