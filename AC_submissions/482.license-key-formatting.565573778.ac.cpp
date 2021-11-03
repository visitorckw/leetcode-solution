/*
 * @lc app=leetcode id=482 lang=cpp
 *
 * [482] License Key Formatting
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string str, res;
        for(auto ch : s)
            if(ch != '-')
                str += toupper(ch);
        if(str.empty()) return "";
        for(int i = 0; i < str.size() % k; i++)
            res += str[i];
        int now = res.size();
        while(now < str.size()){
            res += '-';
            for(int i = 0; i < k; i++)
                res += str[now++];
        }
        if(!(str.size() % k))
            res.erase(res.begin());
        return res;
    }
};
// @lc code=end
