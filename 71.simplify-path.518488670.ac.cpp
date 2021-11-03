/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> split;
        string str;
        for(auto ch : path){
            if(ch == '/'){
                if(!str.empty()){
                    split.push_back(str);
                    str.clear();
                }
                continue;
            }
            str += ch;
        }
        if(!str.empty()) split.push_back(str);
        vector<string> ans;
        for(auto s : split){
            if(s == ".") continue;
            if(s == ".."){
                if(!ans.empty()) ans.pop_back();
                continue;
            }
            ans.push_back(s);
        }
        string res;
        for(auto s : ans){
            res += '/';
            res += s;
        }
        if(res.empty()) return "/";
        return res;
    }
};
// @lc code=end
