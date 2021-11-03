/*
 * @lc app=leetcode id=784 lang=cpp
 *
 * [784] Letter Case Permutation
 */

// @lc code=start
class Solution {
public:
    vector<string>res;
    void dfs(int x, string& s){
        if(x >= s.size()){
            res.push_back(s);
            return;
        }
        if(isalpha(s[x])){
            s[x] = tolower(s[x]);
            dfs(x+1, s);
            s[x] = toupper(s[x]);
            dfs(x+1, s);
        }
        else dfs(x+1, s);
    }
    vector<string> letterCasePermutation(string s) {
        dfs(0,s);
        return res;
    }
};
// @lc code=end
