/*
 * @lc app=leetcode id=1859 lang=cpp
 *
 * [1859] Sorting the Sentence
 */

// @lc code=start
class Solution {
public:
    string sortSentence(string s) {
        vector<string> str;
        string tmp;
        for(auto ch : s){
            if(ch == ' ' and !tmp.empty()){
                str.push_back(tmp);
                tmp = "";
            }
            else if(ch != ' '){
                tmp += ch;
            }
        }
        if(!tmp.empty()) str.push_back(tmp);
        for(int i = 0; i < str.size(); i++){
            for(int j = i + 1; j < str.size(); j++){
                if(str[i].back() > str[j].back()){
                    swap(str[i], str[j]);
                }
            }
        }
        string ans = "";
        for(auto s : str){
            ans += s;
            ans[ans.size() - 1]= ' ';
        }
        ans.pop_back();
        return ans;
    }
};
// @lc code=end
