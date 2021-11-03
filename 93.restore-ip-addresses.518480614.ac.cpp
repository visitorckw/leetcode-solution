/*
 * @lc app=leetcode id=93 lang=cpp
 *
 * [93] Restore IP Addresses
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    void dfs(string str, int p, int dot){
        if(!dot){
            string num;
            for(auto ch : str){
                if(ch == '.'){
                    if(num.size() > 3) return;
                    if(num.empty() or (num[0] == '0' and num.size() > 1) or stoi(num) > 255)
                        return;
                    num = "";
                }
                else{
                    num += ch;
                }
            }
            if(num.size() > 3) return;
            if(num.empty() or (num[0] == '0' and num.size() > 1) or stoi(num) > 255)
                return;
            res.push_back(str);
            return;
        }
        if(p >= str.size()) return;
        dfs(str, p + 1, dot);
        if(p and str[p-1] != '.'){
            str.insert(str.begin() + p, '.');
            dfs(str, p + 2, dot - 1);
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size() > 12) return {};
        dfs(s,0,3);
        return res;
    }
};
// @lc code=end
