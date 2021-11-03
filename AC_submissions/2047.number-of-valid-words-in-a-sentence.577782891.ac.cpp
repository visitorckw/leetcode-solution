/*
 * @lc app=leetcode id=2047 lang=cpp
 *
 * [2047] Number of Valid Words in a Sentence
 */

// @lc code=start
class Solution {
public:
    bool isPunct(const char& ch){
        if(ch == '!') return true;
        if(ch == '.') return true;
        if(ch == ',') return true;
        return false;
    }
    int countValidWords(string sentence) {
        vector<string>words;
        string str;
        for(auto ch : sentence){
            if(ch == ' '){
                if(str.empty()) continue;
                words.push_back(str);
                str.clear();
            }
            else str += ch;
        }
        if(!str.empty()) words.push_back(str);
        
        int ctr = 0;
        for(auto str : words){
            bool valid = true;
            int hyphen = 0;
            int punct = 0;
            for(auto i = 0; i < str.size(); i++){
                char ch = str[i];
                if(isdigit(ch)){
                    valid = false;
                    break;
                }
                if(ch == '-'){
                    hyphen++;
                    if(!i || i == str.size() - 1 || !isalpha(str[i-1]) || !isalpha(str[i+1])){
                        valid = false;
                        break;
                    }
                }
                if(isPunct(ch)){
                    punct++;
                    if(i != str.size() - 1){
                        valid = false;
                        break;
                    }
                }
                if(hyphen >= 2 || punct >= 2){
                    valid = false;
                    break;
                }
            }
            if(valid) ctr++;
        }
        return ctr;
    }
};
// @lc code=end
