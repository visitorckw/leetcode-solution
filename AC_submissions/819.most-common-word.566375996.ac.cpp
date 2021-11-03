/*
 * @lc app=leetcode id=819 lang=cpp
 *
 * [819] Most Common Word
 */

// @lc code=start
class Solution {
public:
    unordered_map<string, int> table;
    unordered_set<string> ban;
    bool stop(const char& ch){
        static const string s = " !?',;.";
        for(auto x : s)
            if(ch == x) return true;
        return false;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string str, res;
        int maxi = 0;
        for(auto s : banned)
            ban.insert(s);
        for(auto ch : paragraph){
            if(stop(ch)){
                if(!str.empty() && !ban.count(str)){
                    if(++table[str] > maxi){
                        res = str;
                        maxi = table[str];
                    }
                }
                str.clear();
            }
            else str += tolower(ch);
        }
        if(!str.empty() && !ban.count(str)){
            if(++table[str] > maxi){
                res = str;
                maxi = table[str];
            }
        }
        return res;
    }
};
// @lc code=end
