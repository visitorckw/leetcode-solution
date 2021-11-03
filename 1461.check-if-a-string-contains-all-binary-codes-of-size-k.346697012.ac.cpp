/*
 * @lc app=leetcode id=1461 lang=cpp
 *
 * [1461] Check If a String Contains All Binary Codes of Size K
 */

// @lc code=start
class Solution {
public:
    int toint(string &s){
        int ans = 0;
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == '1')
                ans += (1 << (s.size()-1-i));
        }
        //cout << ans << '\n';
        return ans;
    }
    bool hasAllCodes(string s, int k) {
        vector<bool>table(1 << (k));
        for(int i = 0; i + k - 1 < s.size(); ++i){
            string str = s.substr(i,k);
            table[toint(str)] = true;
        }
        for(auto n : table)
            if(!n)
                return false;
        return true;
    }
};
// @lc code=end
